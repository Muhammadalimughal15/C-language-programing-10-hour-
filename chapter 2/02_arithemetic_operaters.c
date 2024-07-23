#include<stdio.h>

int main(){
    int a = 6;
    int b = 3;
    int c = a + b ;
    printf("The value of a is %d \n and value of b is %d \n and sum is %d\n", a , b , c );
    // Modules operaters is used to get the reminder 
    printf("The reminder when a is devided by b is :%d",  a % b);

    // This does not work for exponention in c
    // int d = a^b; 
    return 0;
}