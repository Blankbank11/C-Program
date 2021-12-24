#include<stdio.h>

int main()
{
	long int n,sum=0,r;
	printf("Enter number: ");
	scanf("%ld",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=sum;
	while(n>0)
	{
		r=n%10;
		switch(r)
		{
			case 1:
			printf("One");
			break;
			case 2:
			printf("Two");
			break;
			case 3:
			printf("Three");
			break;
			case 4:
			printf("Four");
			break;
			case 5:
			printf("Five");
			break;
			case 6:
			printf("Six");
			break;
			case 7:
			printf("Seven");
			break;
			case 8:
			printf("Eight");
			break;
			case 9:
			printf("Nine");
			break;
			default:
				printf("invalid");
				break;
			
			
		}
		n=n/10;
	}
	
    //check odd or even number?
     if (n%2==0)
    {
      printf("\nThis is even number.\n");
    }else{
        printf("\nThis is odd number.\n");
    }
	
}