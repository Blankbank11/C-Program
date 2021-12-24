//Basic Level
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: "); // user input
    scanf("%d",&n);

    //convert digit to words
    if (n>=0 && n<=9){
       if(n==0)
            printf("Zero\n");
        else if(n==1)
            printf("One\n");
        else if(n==2)
            printf("Two\n");
        else if(n==3)
            printf("Three\n");
        else if(n==4)
            printf("Four\n");
        else if(n==5)
            printf("Five\n");
        else if(n==6)
            printf("Six\n");
        else if(n==7)
            printf("Seven\n");
        else if(n==8)
            printf("Eight\n");
        else if(n==9)
            printf("Nine\n");
    }
    else{
        printf("Pls enter 1-9\n");
    }

    //check odd or even number?
    if (n%2==0)
    {
      printf("This is even number.\n");
    }else{
        printf("This is odd number.\n");
    }
    
}