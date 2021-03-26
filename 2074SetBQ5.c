#include<stdio.h>

struct data{
	char name[20];
	int age;
	int salary;
}employees[19];

int main(){
	
//	WAP to enter the 20 employees name, age and salary using structure and print them
int a,b;
for(a=0;a<=19;a++){
	printf("###### EMPLOYEE %d ######\n",a+1);
	printf("Enter Name of Employee %d : ",a+1);
	scanf("%s",&employees[a].name);
	printf("Enter age of <%s> : ",employees[a].name);
	scanf("%d",&employees[a].age);
	printf("Enter Salary amount of <%s> : ",employees[a].name);
	scanf("%d",&employees[a].salary);
	printf("\n\n");
}



printf("##################### RESULT ##################\n");
printf("____ \t ______________ \t ___ \t _____________ \n");
printf("S.N. \t Employees Name \t Age \t Salary Amount \n");
printf("____ \t ______________ \t ___ \t _____________ \n");
for(b=0;b<=19;b++){
	printf("%4d \t %14s \t %3d \t %8d \n",b+1,employees[b].name,employees[b].age,employees[b].salary);
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
