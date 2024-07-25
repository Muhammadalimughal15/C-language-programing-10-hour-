#include<stdio.h>

int main(){
    if(1){
         printf("This if is executed!\n");
    }
    if(5671){
         printf("This if also is executed!\n");
    }
    if(2.4){
         printf("This if also is executed!\n");
    }
    if('c'){
         printf("This characters if also is executed!\n");
    }
    if(0){
         printf("I am 0 - I am not executed\n");
    }
   
    return 0;
}