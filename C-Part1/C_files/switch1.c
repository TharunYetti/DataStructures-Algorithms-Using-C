#include <stdio.h>
void main(){
	int x=1;
	switch(1){
		case 0:printf("0");break;
		case (x < 3):printf("1");break;
		default:printf("default");
	}
}
