#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ptrace.h>

#define DHFNCJBFUFBSJBSU 15

int hsjvsbhfjbfhgzeifj(void) {
  if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1)
    return 1;
  return 0;
}

int hdmfpbtsvxhsbhdu(char *jdghshubcjbshsbjcbhfb) {
  static unsigned char hdvhsgubdujbujsbgdchn[3] = {0x22, 0x2e, 0x2f};

  for (int i = 0; i < 3; i++) {
    if ((jdghshubcjbshsbjcbhfb[i] ^ 0x41) != hdvhsgubdujbujsbgdchn[i])
      return 0;
  }
  return 1;
}

void jdhbfgtfsrvdhfyrksmpl(char *jcbdgtqfrahduflpsg, int hgsravdejvddb) {
  unsigned char a[DHFNCJBFUFBSJBSU] = {0xc9, 0xc4, 0xc6, 0xce, 0xc4,
                                       0xf6, 0xc4, 0xc4, 0xce, 0xf2,
                                       0xc0, 0xf4, 0xc9, 0xcb, 0xcf};

  unsigned char b[DHFNCJBFUFBSJBSU] = {0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
                                       0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
                                       0xaa, 0xaa, 0xaa, 0xaa, 0xaa};

  for (int i = 0; i < DHFNCJBFUFBSJBSU; i++) {
    jcbdgtqfrahduflpsg[i] = (a[i] ^ b[i]) + i;
    if (hgsravdejvddb)
      jcbdgtqfrahduflpsg[i] ^= 0x13;
  }
}

int pdjyebdbqfdtflcjsb(char *jdghshubcjbshsbjcbhfb, int hgsravdejvddb) {
  char hdjfybcgtfrqsfzrdfmpljguyd[DHFNCJBFUFBSJBSU];
  jdhbfgtfsrvdhfyrksmpl(hdjfybcgtfrqsfzrdfmpljguyd, hgsravdejvddb);

  for (int i = 0; i < DHFNCJBFUFBSJBSU; i++) {
    if (jdghshubcjbshsbjcbhfb[i] != hdjfybcgtfrqsfzrdfmpljguyd[i])
      return 0;
  }
  return 1;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Usage: ./ch3 [flag]\n");
    return 1;
  }

  if (strlen(argv[1]) != DHFNCJBFUFBSJBSU) {
    printf("Try again\n");
    return 1;
  }

  int hgsravdejvddb = hsjvsbhfjbfhgzeifj();

  if (!hdmfpbtsvxhsbhdu(argv[1])) {
    printf("Try again\n");
    return 1;
  } else {
    printf("Well done!\n");
    return 0;
  }

  if (pdjyebdbqfdtflcjsb(argv[1], hgsravdejvddb)) {
    printf("Well done!\n");
  } else {
    printf("Try again\n");
  }

  return 0;
}
