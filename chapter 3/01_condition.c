#include<stdio.h>

int main(){
    int age = 15;
    
    if (age>10){
        printf("We are inside if \n");
        printf("Your age is greater then 10");
    }
     if (age%5==0){
        printf("We are inside another if \n");
        printf("Your age is dicisible by 50");
    }
    return 0;
}