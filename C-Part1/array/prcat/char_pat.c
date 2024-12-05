#include <stdio.h>
void main(){
	char x[7]="*******",y[6]="******",z[5]="*****";
	printf("%15.1s\n",x);
	printf("%15.2s%-6.1s\n",x,y);
	printf("%15.3s%-6.2s\n",x,y);
	printf("%15.4s%-6.3s\n",x,y);
	printf("%15.5s%-6.4s\n",x,y);
	printf("%15.6s%-6.5s\n",x,y);
	printf("%15.7s%-6.6s\n",x,y);
	printf("%15.6s%-6.5s\n",x,y);
	printf("%15.5s%-6.4s\n",x,y);
	printf("%15.4s%-6.3s\n",x,y);
	printf("%15.3s%-6.2s\n",x,y);
	printf("%15.2s%-6.1s\n",x,y);
	printf("%15.1s\n",x);
	
	for(int i=1;i<=6;i++){
		printf("%*.*s%*.*s\n",6,i,y,-5,i-1,z);
	}
	for(int i=5;i>=1;i--){
		printf("%*.*s%*.*s\n",6,i,y,-5,i-1,z);
	}
}
