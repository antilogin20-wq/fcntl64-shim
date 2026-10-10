#define _GNU_SOURCE
#include <fcntl.h>
#include <stdarg.h>
int fcntl64(int fd, int cmd, ...) {
    va_list ap;
    va_start(ap, cmd);
    int ret = fcntl(fd, cmd, ap);
    va_end(ap);
    return ret;
}
