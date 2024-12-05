//counting each characters,vowwels,cons,digits,special symbols
#include <stdio.h>
#include <string.h>
void main(){
	char str[100];
	printf("Enter a string:");
	scanf("%[^\n]s",str);
	//printf("The length of the string is %ld",strlen(str));
	int chars=0,vowels=0,cons=0,digits=0,spchars=0,i=0;
	while(str[i]!='\0'){
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			vowels++;
		else if(str[i]>='0' && str[i]<='9')
			digits++;
		else if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
			cons++;
		else if(str[i]==' '||str[i]=='\t'||str[i]=='\n'){
			i++;
			continue;
		}
		else
			spchars++;
		i++;
		chars++;
	}
	printf("Chars=%d\nvowels=%d\ncons=%d\ndigits=%d\nspchars=%d\n",chars,vowels,cons,digits,spchars);
	
}
