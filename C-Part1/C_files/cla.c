#include <string.h>
#include <stdio.h>
void main(int argc,char **argv){
	printf("program name is %s\n",argv[0]);
	if(argc==1)
		printf("NO extra arguments enetered!\n");
	else if(argc>1){
		printf("Arguments are encountered\n");
		for(int i=0;i<argc;i++){
			printf("%s\n",argv[i]);
		}
	}
	char s[10]="jlufdtrftuhij";
	printf("%d\n",strcmp("Hello","Iello"));
}
