#include <stdio.h>
#include <string.h>
#include "phone_book.h"
#include "debug.h"

#define PBSIZE 100

unsigned char phone_book[PBSIZE][2][128];
int size = 0;

int pb_init()
{
    return 0;
}

int pb_add(char *from, char *to)
{
    LOG_ENTER();

    if ((size < PBSIZE)
        && (from != NULL)
        && (to != NULL)
        && (strlen(from) > 0)
        && (strlen(to) > 0)
        )
    {
        // should really trim spaces.
        strncpy((char *)phone_book[size][0], from, sizeof(phone_book[size][0]));
        strncpy((char *)phone_book[size][1], to, sizeof(phone_book[size][1]));
        size++;
        LOG_EXIT();
        return 0;
    }

    LOG_EXIT();
    return -1;
}

char *pb_search(char *number)
{
    int i = 0;

    LOG_ENTER();

    for (i = 0; i < size; i++)
    {
        if (strcmp((char *)phone_book[i][0], (char *)number) == 0)
        {
            LOG(LOG_INFO, "Found a match for '%s': '%s'", number, phone_book[i][1]);
            strcpy((char *)number, (char *)phone_book[i][1]);
            break;
        }
    }

    LOG_EXIT();
    return number;
}
