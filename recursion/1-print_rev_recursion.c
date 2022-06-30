#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse,
 * followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */

void _print_rev_recursion(char *s){
  if (*s != '\0'){ 
    _print_rev_recursion(s + 1);
    printf("%c", *s);
  }
}