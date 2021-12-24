#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    int len,i,j;
    printf("\n Enter a String: "); //user input
    gets(str);
    len = strlen(str);
    
    //condition for removing vowel from string
    for(i=0;i<len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
        str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){

            for ( j = i; j < len; j++){
                str[j]=str[j+1];
            }
            len--;     
    }
    
}

printf("\n Result: %s\n",str); //result
}