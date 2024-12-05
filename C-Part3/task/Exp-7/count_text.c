//read a text until # appears and also count the number of lines,number of characters and number of words
#include <stdio.h>
#include <string.h>
void main(){
	int lines=0,chars=0,words=0;
	char text[100];
	printf("ENter a text and include # at the end:");
	scanf("%[^#]s",text);
	for(int i=0;i<strlen(text);i++){
		if(text[i]=='\n')
			lines++;
		if(text[i]==' ' || text[i]=='\t' || text[i]=='\n')
			words++;
		chars++;
	}
	printf("The number of lines are %d\nThe number of words are %d\nThe number of charactres are %d(excluding #)\n",lines+1,words+1,chars);
}
