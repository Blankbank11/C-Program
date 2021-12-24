#include <stdio.h>

int main(){
    int num,d,sum=0;
    printf("Insert 5 numbers: \n");
    scanf("%d",&num);
    
    //sum of five digit
    while(num!=0){
        d =num %10;
        sum = sum+d;
        num=num/10;
    }

    printf("sum = %d\n",sum);
}
