#include <stdio.h>
int main()
{
    int a;
    char ch = 'a';
    ch = 'b';
    ch = '9';
    ch = '/n';                         // represent escape sequence
    printf("Hey i am a good /n boy "); // /n is fpr new line
    printf("Hey i am a good /t boy "); // /t is for tab in a line
    printf("Hey i am a good \" boy\" "); // \""\ is used to double cote a word
    return 0;
}