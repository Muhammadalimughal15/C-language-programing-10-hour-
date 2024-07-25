#include<stdio.h>

int main(){
     int age = 65;
     if (age > 60){
        printf("You can drive and you are a senior cetizin ");
     }
     else if(age > 18){
        printf("You can drive");
     }
     else{
        printf("You cannot drive");
     }
    return 0;
}