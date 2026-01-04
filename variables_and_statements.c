#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // Variable declarations and assignments
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";  // char * ("char pointer") is the string type
    bool b = true; // C23 only

    // Artihmetic operators
    i = i + 3;  // Addition (+) and assignment (=) operators, add 3 to i
    i = i - 8;  // Subtraction, subtract 8 from i
    i = i * 9;  // Multiplication
    i = i / 2;  // Division
    i = i % 5;  // Modulo (division remainder)

    // Ternary operator
    int x = 15;
    int y;
    y += x > 10? 17: 37;

    printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");

    // Conditional operators
    int foo = 1;
    int bar = 2;
    foo == bar;  // True if foo is equivalent to bar
    foo != bar;  // True if foo is not equivalent to bar
    foo < bar;   // True if foo is less than bar
    foo > bar;   // True if foo is greater than bar
    foo <= bar;  // True if foo is less than or equal to bar
    foo >= bar;  // True if foo is greater than or equal to bar


    // sizeof operator
    int big = 999;
    printf("%zu\n", sizeof big);

    // Flow control

    // if-else
    int z = 99;

    if (z == 10) printf("z is 10!\n");

    else if (z == 20)
        printf("z is 20!\n");

    else if (z == 99) {
        printf("z is 99! My favorite\n");
    }

    else
        printf("z is some crazy number I've never heard of.\n");

    // Switch
    switch (z) {
        case 10:
            printf("z is 10!\n");
            break;
        case 20:
            printf("z is 20!\n");
            break;
        case 99:
            printf("z is 99! My favorite\n");
            break;
        default:
            printf("z is some crazy number I've never heard of.\n");
            break;
    }

    // While
    int w = 0;

    while (w < 5) {
        printf("i is now %d!\n", w);
        w++;
    }

    printf("While all done!\n");

    // For loop
    for (i = 0; i < 5; i++) {
        printf("i is %d\n", i);
    }

    printf("For loop all done!\n");

}
