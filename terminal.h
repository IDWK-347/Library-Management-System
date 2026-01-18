#ifndef TERMINAL_H
#define TERMINAL_H

#include <stddef.h>

#ifdef _WIN32
#include <windows.h>
#define msleep(x) Sleep(x)
#else
#include <unistd.h>
#include <sys/ioctl.h>
#include <termios.h>
#define msleep(x) usleep((x) * 1000)
#endif

#ifdef __cplusplus
extern "C" {
#endif

int get_terminal_width(void);
int get_terminal_height(void);
void clear_screen(void);
void read_pwd(char *buf, size_t sz);
void init_terminal(void);

#ifdef __cplusplus
}
#endif

#endif
