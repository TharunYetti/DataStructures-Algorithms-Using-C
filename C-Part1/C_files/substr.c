#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
	char s1[]="THARUN",s2[]="ARU";
	int i=0,isfound=0;
	while(s1[i]!=0){
		int j=0;
		while(s2[j]!=0){
			if(s1[i+j]==s2[j])
				j++;
			else
				break;
		}
		if(s2[j]=='\0'){
			isfound=1;
			printf("Found at from %d to %d\n",i,i-1+strlen(s2));
		}
		i++;
	}
	if(isfound==0){
		printf("Not found\n");
	}

}
