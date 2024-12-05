#include <stdio.h>
void main(){
	for(int i=0;i<=9999;i++){
		if(i<10)
			printf("000%d,",i);
		else if(i<100)
			printf("00%d,",i);
		else if(i<1000)
			printf("0%d,",i);
		else
			printf("%d,",i);
	}
}
