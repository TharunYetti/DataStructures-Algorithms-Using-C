#include <stdio.h>
void main(){
	enum xenum {c,cp,cpp};
	enum yenum {k,xenum};
	enum xenum var;
	enum yenum var2;
	printf("The size of xenum is %d\n",sizeof(var));
	printf("The size of yenum is %d\n",sizeof(var2));
}
