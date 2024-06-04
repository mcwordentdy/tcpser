/********************************************************************************/
/* History:
 *
 * 20Jan14 gwb Added support for an ip address to be passed to ip_init_server_conn()
 *             in support of the expanded "-p" command line option.
 *
 */

#ifndef IP_H
#define IP_H

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

int ip_init(void);
int ip_init_server_conn(char ip_addr[], int port);
int ip_connect(char addy[]);
int ip_accept(int sSocket);
int ip_disconnect(int fd);
int ip_write(int fd, char *data, int len);
int ip_read(int fd, char *data, int len);

#endif // ifndef IP_H
