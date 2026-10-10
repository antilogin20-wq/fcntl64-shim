#define _GNU_SOURCE
#include <fcntl.h>
#include <stdarg.h>
#include <resolv.h>

int fcntl64(int fd, int cmd, ...) {
    va_list ap;
    va_start(ap, cmd);
    int ret = fcntl(fd, cmd, ap);
    va_end(ap);
    return ret;
}

int __res_nquery(void *statep, const char *dname, int class, int type,
                 unsigned char *answer, int anslen) {
    return res_query(dname, class, type, answer, anslen);
}
