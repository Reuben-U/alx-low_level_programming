#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
void print_name(char *name, void (*f)(char *));
#include <stdio.h>
void print_name_as_is(char *name);
void print_name_uppercase(char *name);


#endif
