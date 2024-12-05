#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
	char m[]="THARUNARU",s[]="ARU";
	int i=0,isfound=0;
	while(m[i]!=0){
		int j=0;
		while(s[j]!=0){
			if(m[i+j]==s[j])
				j++;
			else
				break;
		}
		if(s[j]=='\0'){
			isfound=1;
			printf("Found at %d\n",i);
		}
		i++;
	}
	if(isfound==0)
		printf("Not FOund\n");
}

/*
char s1[]="THARUN",s2[]="AU";
	for(int i=0;i<strlen(s2);i++){
		for(int j=0;j<strlen(s1);j++){
			int isfound=0;
			if(s1[j]==s2[i]){
				for(int k=j;k<j+strlen(s2);k++){
					for(int m=0;m<strlen(s2);m++){
						if(s1[j]=s2[k])
							isfound=1;
					}
				}
			}
			if(isfound==1){
				printf("FOund\n");
				break;
			}
		}
	}
*/
