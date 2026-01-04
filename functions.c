#include <stdio.h>

// Function prototype
int plus_one(int n);

int main(void) {
    int i = 10, j;

    j = plus_one(i);

    printf("i + 1 is %d\n", j);

}

// Function definition
int plus_one(int n)
{
    return n + 1;
}
