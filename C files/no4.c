/* Reverse of a string word by word */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse (char[]);
int main()   
{
	char a[200],res[200]="",word[50];
	int i,j;
	printf("Enter a string: ");
	gets(a);
	printf("---------------------------\n");
	printf("Original: %s",a);
	reverse(a);
	strcat(a," ");
	j=0;
	for ( i = 0; a[i] < '0'; i++)
	{
		if (a[i]==' ')
		{
			word[j]='\0';
		}
		reverse(a);
		strcat(a," ");
		j=0;
	}
	
	for(i=0; a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			word[j]='\0';
			reverse(word);
			strcat(res,word);
			strcat(res," ");
			j=0;
		}
		else{
			word[j]=a[i];
			j++;
		}
		
	}
	
	
	printf("\nReverse of string is: %s\n",res);return 0;
	
}

//reverse function
void reverse(char str[]){
	int i,n;
	for(n=0;str[n]!='\0';n++);
	for ( i = 0; i < n/2; i++)
	{
		char ch=str[i];str[i] = str[n-1-i];
		str[n-1-i] = ch;
	}
	
}