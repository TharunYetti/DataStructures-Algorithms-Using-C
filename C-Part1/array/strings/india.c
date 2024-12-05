#include <stdio.h>
void main(){
	int i,j,num1,num2;
	char x[6]="INDIA",dob=1995;
	//printf("%-6.1s\n",x);
	//printf("%-6.2s\n",x);
	//printf("%-6.3s\n",x);
	//printf("%-6.4s\n",x);
	//printf("%s\n",x);
	//printf("%-6.4s\n",x);
	//printf("%-6.3s\n",x);
	//printf("%-6.2s\n",x);
	//printf("%-6.1s\n",x);
	for(i=1;i<=5;i++){
		printf("%*.*s \n",6,i,x);
	}
	for(i=4;i>=1;i--){
		printf("%*.*s \n",6,i,x);
	}
	
	printf("%c\n",dob);
	
	//comparision between a string
	
	char str1[3]="Hi",str2[6]="Hi";
	i=0;
	while(str1[i]!='\0' && str2[i]!='\0' && str1[i]==str2[j]){
		i++;
	}
	if(str1[i]=='\0' && str2[i]=='\0'){
		printf("Both are equal \n");
	}
	else{
		printf("Not equal\n");
	}
	/*
	
	char str1[3]="Hi",str3[5];
	//copying char by char from one string to others
	
	for(i=0;i<2;i++){
		str3[i]=str1[i];
	}
	printf("%s\n",str3);
	*/
	
	
	
}
