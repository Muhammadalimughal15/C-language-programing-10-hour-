#include <stdio.h>

int main()
{
    // Using Do while loop:
    // int i = 1;
    // int sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // } while (i <= 10);
    // printf(" The sum of first 10 natural no is %d", sum);

    // uning For loop:
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {

        sum += i;
    }

    printf(" The sum of first 10 natural no is %d", sum);

    return 0;
}