#ifndef __KAOS_VENG_STRING_H__
#define __KAOS_VENG_STRING_H__ 1

#include <stddef.h>

size_t strlen(const char *str);
void strcpy(const char *src, char *dst);
void *memset(void *s, int c, size_t n);

#endif