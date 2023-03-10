#include "main.h"

int main(int argc, char *argv[]) {
  char *program_name = argv[0];
  int i = 0;
  while (program_name[i] != '\0') {
    putchar(program_name[i]);
    i++;
  }
  putchar('\n');
  return 0;
}
