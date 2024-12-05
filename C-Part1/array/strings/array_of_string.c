//array of strings
#include <stdio.h>
#include <string.h>
void main(){
	int r=4,c=10;
	char str[r][c],temp[c];
	for(int i=0;i<4;i++){
		scanf("%s",str[i]);
	}
	for(int i=0;i<r-1;i++){
		for(int j=0;j<r-i-1;j++){
			if(strcmp(str[j],str[j+1])>0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
	printf("The sorted list is \n");
	for(int i=0;i<r;i++){
		puts(str[i]);
	}
}
