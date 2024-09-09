#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i); // 11

    // i++ prints i first and then increment i (Post increment operaters)
    // ++i increment i first and then prints i (Post increment operaters)

    i+=2; // same as  i = i + 2;
    printf("The value of i is %d\n", i); // 13
    return 0;
}