#include<stdio.h>


int main(){
//	WAP to enter name,post and salary of a employee and write it in a file "employee.dat"

FILE*data=fopen("employee.dat","w");
char name[20];
char post[20];
int salary;


printf("Enter Name of Employee : ");
gets(name);
printf("Enter Post of <%s> : ",name);
gets(post);
printf("Enter salary amount : ");
scanf("%d",&salary);

fprintf(data,"##### EMPLOYEE RECORD ####\n");
fprintf(data,"Name : %s\n",name);
fprintf(data,"Post : %s\n",post);
fprintf(data,"Salary : %d\n",salary);


if(data==NULL){
	
	printf("\nSorry Operation Fail.");
}else if(data!=NULL){
	printf("\nYour File (employee.dat) is succesfully saved");
}

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}