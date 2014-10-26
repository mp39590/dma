#include <nv.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/nameser.h>
#include <resolv.h>

#define DH_SERVICE_REMOTE 0
#define DH_SERVICE_LOCAL 1

#define DH_CMD_RES_INIT 0
#define DH_CMD_RES_SEARCH 1

int dh_res_init(int);
int dh_res_search(int, const char *, int, int, u_char *, int);

void dh_srv_res_search(nvlist_t *, nvlist_t *);
void dh_srv_remote(int);
void dh_srv_local(int);
void dh_srv_dispatch(int, int);
void dh_loop(int);
int dh_service(int, int);
int dh_init(void);
