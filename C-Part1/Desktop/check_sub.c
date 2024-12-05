#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
	char m[]="THARUN",s[]="ARU";
	int i=0,isfound=0;
	while(m[i]!=0){
		int j=0;
		while(s[j]!=0){
			if(m[i+j]==s[j])
				j++;
			else
				break;
		}
		if(s[j]==0){
			isfound=1;
			printf("FOund at %d\n",i);
		}
		i++;
	}
	if(isfound==0)
		printf("Not found\n");
}
