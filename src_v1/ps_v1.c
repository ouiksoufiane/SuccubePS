#include "ps_v1.h"
#include <errno.h>

int ps_open(char *categorie, int options, int mode) {
    errno = ENOSYS;  
    return -1;
}

int ps_read(int fd, char *message, int size) {
    errno = ENOSYS;
    return -1;
}

int ps_write(int fd, char *message, int size) {
    errno = ENOSYS;
    return -1;
}

int ps_close(int fd) {
    errno = ENOSYS;
    return -1;
}

