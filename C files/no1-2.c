#include<stdio.h>

int remove_vowel(char);

int main() {
	char str[200],temp[200];
	int i,j;
	printf("Enter a sentence : "); //user input
	gets(str);
	
	//remove vowel from string
	for(i=0,j=0;str[i]!='\0';i++) {
		if(remove_vowel(str[i])==1) {
			temp[j]=str[i];
			j++;
		}
	}
	temp[j]='\0';
	printf("%s",temp);
	return 0;
}


//remove vowel function
int remove_vowel(char ch) {
	switch(ch) {
		case'A' : return 0; break;
		case'E' : return 0; break;
		case'I' : return 0; break;
		case'O' : return 0; break;
		case'U' : return 0; break;
		case'a' : return 0; break;
		case'e' : return 0; break;
		case'i' : return 0; break;
		case'o' : return 0; break;
		case'u' : return 0; break;
		default : return 1;
	}
	
	
}