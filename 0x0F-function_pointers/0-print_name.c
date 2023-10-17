#include "function_pointers.h"

/**
 * print_name - calls function that prints string
 * @name: string to be printed
 * @f: function pointer (call-back function)
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
