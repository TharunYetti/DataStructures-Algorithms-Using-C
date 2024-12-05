#include <stdio.h>
typedef struct{
	char name[20];
	int roll;
	char gender;
	char branch[4];
	int sub[6];
	long mobile;
}student;
void main(){
	student stu[2];
	for(int i=0;i<2;i++){
		printf("Enter the name and roll number with a space:");
		scanf("%s %d",stu[i].name,&stu[i].roll);
		for(int j=0;j<6;j++){
			printf("ENter marks of sub%d:",j+1);
			scanf("%d",&stu[i].sub[j]);
		}
		printf("Enter the gender(m/f) and branch with a space between:");
		scanf("%c %s",&stu[i].gender,stu[i].branch);
		printf("ENter mobile number:");
		scanf("%ld",&stu[i].mobile);
	}
	for(int i=0;i<2;i++){
		int sum=0;
		for(int j=0;j<6;j++){
			sum+=stu[i].sub[j];
		}
		float avg=(float)sum/6;
		if(avg>8){
			printf("--------------*******--------------\n");
			printf("Name:%s\nRoll Number:%d\n",stu[i].name,stu[i].roll);
			printf("Gender:%c\nBranch:%s\n",stu[i].gender,stu[i].branch);
			printf("Mobile Number:%ld\n",stu[i].mobile);
			for(int j=0;j<6;j++)
				printf("Subject %d marks:%d\n",j+1,stu[i].sub[j]);
		}
	}
}
