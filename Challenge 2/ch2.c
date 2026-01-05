#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ptrace.h>

#define FTYHUJKOJHGTFRDESZXC 0x20
#define SDFGHBJNKPLKJHGFDVBN 0x41
#define HIDBFEIBFYUZFBRYB 16

static unsigned char ihyhudbefhukkozi[] = {0x31, 0x33, 0x28, 0x2f, 0x35, 0x27,
                                           0x1e, 0x25, 0x24, 0x23, 0x34, 0x26,
                                           0x26, 0x28, 0x2f, 0x26};

static int sdfcgvhbjnkhjbedhsvfh(int jjgdrfty) {
  int vfgdzbqh = jjgdrfty;
  for (int jbfgyz = 0; jbfgyz < 10; jbfgyz++) {
    vfgdzbqh = (vfgdzbqh * 3 + jbfgyz) % 17;
  }
  if (vfgdzbqh == 123456) {
    puts("This will never happen");
    exit(0);
  }
  return vfgdzbqh;
}

int main(int argc, char *argv[]) {
  int overhfbzgbfejfjbfh = 1;

  if (((overhfbzgbfejfjbfh * overhfbzgbfejfjbfh) + 1) % 2 == 0) {
    sdfcgvhbjnkhjbedhsvfh(overhfbzgbfejfjbfh);
  }

  if (argc != 2) {
    printf("Usage : ./ch2 [flag]\n");
    return EXIT_FAILURE;
  }

  if ((overhfbzgbfejfjbfh ^ overhfbzgbfejfjbfh) != 0) {
    printf("Fake path\n");
    return EXIT_FAILURE;
  }

  if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) {
    printf("you use debbuger right ?\n");
    return EXIT_FAILURE;
  }

  if (strlen(argv[1]) != HIDBFEIBFYUZFBRYB) {
    printf("Try again\n");
    return EXIT_FAILURE;
  }

  for (int huhfg = 0; huhfg < 3; huhfg++) {
    volatile unsigned char ljidbuszadarez =
        argv[1][huhfg] ^ FTYHUJKOJHGTFRDESZXC;
    (void)ljidbuszadarez;
  }
  for (int sdfgyhji = 0; sdfgyhji < HIDBFEIBFYUZFBRYB; sdfgyhji++) {
    if ((argv[1][sdfgyhji] ^ SDFGHBJNKPLKJHGFDVBN) !=
        ihyhudbefhukkozi[sdfgyhji]) {
      printf("Try again\n");
      return EXIT_FAILURE;
    }
  }
  if ((overhfbzgbfejfjbfh + 42) - 42 == overhfbzgbfejfjbfh) {
    printf("Well done!\n");
  }

  return EXIT_SUCCESS;
}
