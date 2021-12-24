#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// not finshied yet T_T
int main(){
    int c;
    char str[2500];
    char str1[2500];
    printf("Enter any string: ");
    scanf("%s",str);
    printf("Result is: ");
    for (int i = 0; str[i]!='\0'; i++){
        c =str[i];
        for(int j=7;j+1>0;j--){
            if(c>=(1<<j)){
                c=c-(1<<j);
                printf("1");
            }else{            
                printf("0");
            }
        }
        
    }
    
}