#include <stdio.h>
#include <ctype.h>
#include "main.h"

void _islower (int c)
{
   if (islower(c)) {
      printf(1);
   } else {
      printf(0);
   }
   return 0;
}
