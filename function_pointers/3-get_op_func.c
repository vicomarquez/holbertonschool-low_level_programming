#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
/**
 *get_op_func - executes a function
 *@s: pointer
 *Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	   op_t ops[] = {
		   {"+", op_add},
		   {"-", op_sub},
		   {"*", op_mul},
		   {"/", op_div},
		   {"%", op_mod},
		   {NULL, NULL}
	   };
	   int i;

	   i = 0;
	   while (ops[i].op)
	   {
		   if (*(ops[i].op) == *s || (s + 1) == '\0')
			   return (ops[i].f);
		   i++;
	   }
	   return (0);
}
