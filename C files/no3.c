#include "stdio.h"

int main(){
    int num,count;
    long double fact = 1;
    printf("Enter a number to find its Factorial: ");
    scanf("%d",&num);

    for (count = 1; count <= num; count++)
    {
         fact = fact * count;
    }
    printf("%.0Lf\n",fact);
    return 0;
}