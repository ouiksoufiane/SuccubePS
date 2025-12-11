#ifndef PS_V1_H
#define PS_V1_H

int ps_open(char *categorie, int options, int mode);
int ps_read(int fd, char *message, int size);
int ps_write(int fd, char *message, int size);
int ps_close(int fd);

#endif

