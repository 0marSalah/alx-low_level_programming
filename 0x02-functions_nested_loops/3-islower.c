#include <stdio.h>
#include <ctype.h>
#include "main.h"

void _islower (int c)
{
   if (islower(c)) {
      putchar(1);
   } else {
      putchar(0);
   }
   return (0);
}
