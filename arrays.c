#include <stdio.h>

int main(void) {

  float f[4]; // declare an array of 4 floats
  
  f[0] = 2;
  f[1] = 4;
  f[2] = 6;
  f[3] = 8;

  for (int i = 0; i < 4; i++) {
    printf("%f\n", f[i]);
  }


  // To get size of array
  // Only works in the same scope
  int x[12];  // 12 ints

  printf("%zu\n", sizeof x);     // 48 total bytes
  printf("%zu\n", sizeof(int));  // 4 bytes per int
  printf("%zu\n", sizeof x / sizeof(int));  // 48/4 = 12 ints!

  // Array initialisers
  int a[5] = {22, 37, 3490, 18, 95};

  int b[100] = {0}; // initialise with 100 0's'
  
  int c[10] = {1, 2, 3, [4]=5, 6};

  #define COUNT 5
  int d[COUNT] = {[COUNT-3]=3, 2, 1};

}

