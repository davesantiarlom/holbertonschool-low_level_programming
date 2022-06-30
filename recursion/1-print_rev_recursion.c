#include <stdio.h>

// prints string s in reverse
void _print_rev_recursion(char *s){
  if (*s != '\0'){ 
    _print_rev_recursion(s + 1);
    printf("%c", *s);
  }
}
