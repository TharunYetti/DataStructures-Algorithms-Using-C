#include <stdio.h>
void main(){
	char s[10]="Hello HII";
	for(int i=0;i<10;i++){
		if(s[i]>='A' && s[i]<='Z')
			s[i]=(char)(s[i]+32);
	}
	puts(s);
}
