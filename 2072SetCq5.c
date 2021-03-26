#include<stdio.h>

int main(){
//	WAP which asks name, age ,rollNumber of student and write it in a file "student.dat"

char name[20];
int age;
int RollNo;

FILE*stdData=fopen("student.dat","w");


printf("Enter the name of Student : ");

gets(name);
printf("Enter age of <%s> : ",name);
scanf("%d",&age);
printf("Enter Roll No. of <%s> : ",name);
scanf("%d",&RollNo);


fprintf(stdData,"######Student Record######\n\n");
fprintf(stdData,"Name : %s\n",name);
fprintf(stdData,"Age : %d\n",age);
fprintf(stdData,"Roll No. : %d\n",RollNo);

if(stdData==NULL){
	printf("\n----Sorry Operation Failed----\n");
}else if(stdData!=NULL){
	printf("\n----Succesfully Saved----\n");
}


	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}