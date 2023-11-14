#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int char_print(va_list val);
int str_print(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int print_pc(void);
int printi(va_list args);
int printd(va_list args);
int printb(va_list val);
int printu(va_list args);


#endif
