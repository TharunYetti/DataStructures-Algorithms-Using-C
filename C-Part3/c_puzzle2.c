//take a string containing only lowercase letters. Write a C program to find the first non-repeating character in the string and return its index. If all the characters are repeating, return -1
#include <stdio.h>
#include <string.h>
int main(){
	char inp[50];
	printf("Enter a text:");
	scanf("%s",inp);
	int len=strlen(inp);
	for(int i=0;i<len;i++){
		int j=0,count=0;
		while(inp[j]!=0){
			if(inp[j]==inp[i] && i!=j)
				count++;
			j++;
		}
		if(count==0){
			printf("The first non repeating charactyer is %c\n",inp[i]);
			return i;
		}
	}
	return -1;
}
