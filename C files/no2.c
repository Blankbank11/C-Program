#include "stdio.h"

int main(){
    char str[1024];
    printf("\nEnter a String: "); //user input
    gets(str);

    /* ASCII Values of:
       Uppercase letters: A,B,C...Z are 65,66,67...90
       Lowercase letters: a,b,c...z are 97,98,99...122
       Ex: 'A' + 32 = 'a'
           'b' - 32 = 'B'
    */
    for ( int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i]<=90)
           str[i] = str[i] +32;     //convert uppercase to lowercase
        else
            str[i] = str[i] -32;    //convert lowercase to uppercase  
    }
    printf("\nConverted String is: %s\n",str);

}