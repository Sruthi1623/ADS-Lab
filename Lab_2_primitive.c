#include <stdio.h>

int main()
{
    int integerVariable;
    size_t size;

    size = sizeof(integerVariable);

    printf("Size of Integer Variable is %zu bytes\n", sizeof(char));
    printf("Size of Integer Variable is %zu bytes\n", sizeof(float));
    printf("Size of Integer Variable is %zu bytes\n", sizeof(double));

    return 0;
}