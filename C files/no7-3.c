//advance level
#include "stdio.h"
#include "string.h"

int main(){
    char a[30];
    char *single[]={"Zero","one","two","three","four","five","six","seven","eight","nine"};
    char *double_digit[]={"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *tens_place[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    printf("Enter a number: \n");
    scanf("%s",a);

    int len=strlen(a);
    int num;
    if (len==1){
       num = a[0]-48;
       printf("%s ",single[num]);
    }

    if(len ==2 && a[0]==49){
     num =(a[0]-48)+ (a[1]-48);
     printf("%s ",double_digit[num]);
    }
    else if(len ==2 && a[1]==48){
     num =(a[0]-48)+ (a[1]-48);
     printf("%s ",tens_place[num]);
    }
    else if(len==2){
        num = a[0] -48;
        printf("%s ",tens_place[num]);
        num = a[1]-48;
        printf("%s ",single[num]);
    }
}