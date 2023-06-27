#include "main.h"
/**
*puts=prints a string with new line
*str:string to the print
*return: void;
**/
int puts(char *str)
char *a=str;

while (*str)
  _putchar(*str++);
return (str -a;
/**
  *_putchar writes the character c to str
  *c is the character to print
  *return:1 upon success;
  **/
int (_putchar)(int c)

  static int i;
static char buf(OUTPUT_BUF_SIZE);

if (c==BUF_FLUSH || i>=OUTPUT_BUF_SIZE)
{
  write (1,buf,i);
 i=0;
}
  
  if (c !==BUF_FLUSH)
    buf[i++]=c;
return (1);}
