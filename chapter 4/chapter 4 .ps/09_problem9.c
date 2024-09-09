#include <stdio.h>

int main()
{
    // 8!= 1 x 2 x 3 x 4 x 5 x 6 x  7 x 8
    // 5!= 1 x 2 x 3 x 4 x 5
    // n!= 1 x 2 x 3 x 4 x 5 .........x n
    // 0! = 1
    int i = 1;
    int product = 1;
    int n = 4;
    while (i <= n)
        {
            product *= i;
            i++;
        }
        printf(" The factorial of %d is %d",n, product);
        return 0;
    }