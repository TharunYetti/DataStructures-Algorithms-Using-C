#include <stdio.h>
void main(){
	char s1[5]="HELlo";
	for(int i=0;i<5;i++){
		if(s1[i]>='A' && s1[i]<='Z'){
			s1[i]=(char)(s1[i]+32);
		}
	}
	puts(s1);
}
