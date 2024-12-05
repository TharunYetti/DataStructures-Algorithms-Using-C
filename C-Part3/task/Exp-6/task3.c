#include <stdio.h>
void main(){
	for(int m=0;m<10;m++){
		printf("----Student %d Details----\n",m+1);
		int marks[6],g;
		long ph,id;
		float avg,sum=0;
		char name[50],branch[3];
		printf("Enter your Name :");
		scanf("%s",name);
		printf("Enter your Id(without 'R'):");
		scanf("%ld",&id);
		printf("Enter your Branch :");
		scanf("%s",branch); 
		printf("Enter Phone Number :");
		scanf("%ld",&ph);
		for(int i=0;i<6;i++){
			printf("Enter the marks(OUT OF HUNDRED) of Subject %d :",i+1);
			scanf("%d",&marks[i]);
			sum+=marks[i];
		}
		avg=sum/6;g=avg/10;
		printf("Student Name : %s\n",name);
		printf("Student Id : R%ld\n",id);
		printf("Student Branch : %s\n",branch);
		printf("Student Phone Number : %ld\n",ph);
		switch(g){
			case 10:
			case 9: printf("Student Grade : Ex\n");break;
			case 8: printf("Student Grade : A\n");break;
			case 7: printf("Student Grade : B\n");break;
			case 6: printf("Student Grade : C\n");break;
			case 5: printf("Student Grade : D\n");break;
			case 4: printf("Student Grade : E\n");break;
			default : printf("Congratulations You are allowed to study this year again (Remedial)\n");
		}
	}
}

/*
#include <stdio.h>
void main(){
	for(int m=0;m<10;m++){
		printf("----Student %d Details----\n",m+1);
		int marks[6],g;
		float avg,sum=0;
		char name[100],branch[3],ph[10],id[7];
		printf("Enter your Name           :");
		scanf("%s",name);
		printf("Enter your Branch         :");
		scanf("%s",branch);
		printf("Enter your Id(without 'R'):");
		scanf("%s",id); 
		printf("Enter Phone Number        :");
		scanf("%s",ph);
		for(int i=0;i<6;i++){
			printf("Enter the marks(OUT OF HUNDRED) of Subject %d :",i+1);
			scanf("%d",&marks[i]);
			sum+=marks[i];
		}
		avg=sum/6;g=avg/10;
		printf("------------- STUDENT %d PROGRESS --------------\n",m+1);
		printf("Student Name         : %s\n",name);
		printf("Student Id           : R%s\n",id);
		printf("Student Branch       : %s\n",branch);
		printf("Student Phone Number : %s\n",ph);
		switch(g){
			case 10:
			case 9: printf("Student Grade        : Ex\n");break;
			case 8: printf("Student Grade        : A\n");break;
			case 7: printf("Student Grade        : B\n");break;
			case 6: printf("Student Grade        : C\n");break;
			case 5: printf("Student Grade        : D\n");break;
			case 4: printf("Student Grade        : E\n");break;
			default : printf("Congratulations You are allowed to study this year again (Remedial)\n");
		}
	}
}
*/
