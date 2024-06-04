/******************************************************************************/
/* History:
 *
 * 20Jan14 gwb Added ip_addr to the print_help prototype in support of the
 *             expanded functionality of the "-p" command line switch.
 */

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

#include "modem_core.h"


void print_help(char *name);
int init(int argc,
         char **argv,
         modem_config cfg[],
         int max_modem,
         char **ip_addr, /* gwb */
         int *port,
         char *all_busy,
         int all_busy_len);
