#ifndef _MAIN_H
#define _MAIN_H

/* Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stadarg.h>

/* Important */
int printf_revs(va_list val);
int print_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list val);

/* Utils */
int _str_len(char *str);
int _str_lenc(const char *str);
int _str_lenc(const char *str);

/* More Prints */
int printf_37(void);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_unsigned(va_list args);

/* Printers. */
int printf_bin(va_list val);
int printf_oct(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_pointer(va_list val);

/* Extras */
int printf_HEX_x(unsigned int num);
int printf_hex_x(unsigned long int num);
int printf_exc_str(va_list val);
int printf_rot13(va_list val);

#endif _MAIN_H
