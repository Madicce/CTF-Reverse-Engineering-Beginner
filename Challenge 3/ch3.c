#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ptrace.h>

#define FLAG_LEN 15

int anti_debug(void) {
  if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1)
    return 1;
  return 0;
}

int fake_check(char *input) {
  static unsigned char fake[3] = {0x22, 0x2e, 0x2f};

  for (int i = 0; i < 3; i++) {
    if ((input[i] ^ 0x41) != fake[i])
      return 0;
  }
  return 1;
}

void build_flag(char *out, int debugged) {
  unsigned char a[FLAG_LEN] = {0xc9, 0xc4, 0xc6, 0xce, 0xc4, 0xf6, 0xc4, 0xc4,
                               0xce, 0xf2, 0xc0, 0xf4, 0xc9, 0xcb, 0xcf};

  unsigned char b[FLAG_LEN] = {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
                               0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa};

  for (int i = 0; i < FLAG_LEN; i++) {
    out[i] = (a[i] ^ b[i]) + i;
    if (debugged)
      out[i] ^= 0x13;
  }
}

int real_check(char *input, int debugged) {
  char flag[FLAG_LEN];
  build_flag(flag, debugged);

  for (int i = 0; i < FLAG_LEN; i++) {
    if (input[i] != flag[i])
      return 0;
  }
  return 1;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Usage: ./ch3 [flag]\n");
    return 1;
  }

  if (strlen(argv[1]) != FLAG_LEN) {
    printf("Try again\n");
    return 1;
  }

  int debugged = anti_debug();

  if (!fake_check(argv[1])) {
    printf("Try again\n");
    return 1;
  } else {
    printf("Well done!\n");
    return 0;
  }

  if (real_check(argv[1], debugged)) {
    printf("Well done!\n");
  } else {
    printf("Try again\n");
  }

  return 0;
}
