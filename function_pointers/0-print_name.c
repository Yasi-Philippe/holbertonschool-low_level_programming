#include "function_pointers.h"

/**
 * print_name - Prints the name passed into it.
 * @name: Input name to be printed.
 * @f: Function pointer that specifies the format the name shall be printed in.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
