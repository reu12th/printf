#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - printf converter
 * @id: type char pointer of the specifier
 * @func: function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*func)();
} merge;

int *_strcpy(char *dest, char *src);
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
int printo(va_list val);
int printx(va_list val);
int printX(va_list val);
int printS(va_list val);
int _printX(unsigned int n);
int printp(va_list val);
int _printx(unsigned long int n);
int printr(va_list args);
int printR13(va_list args);

#endif/*MAIN_H*/
