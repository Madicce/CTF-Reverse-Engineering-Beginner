#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage : ./ch1 [flag]\n");
    return EXIT_FAILURE;
  }

  if (strcmp(argv[1], "easy_reverse") == 0) {
    printf("You found the flag!!\n");
  } else {
    printf("Try again\n");
  }

  return EXIT_SUCCESS;
}
