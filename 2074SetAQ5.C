#include<stdio.h>

struct record{
	char name[20];
	int salary;
}employess[4];

int main(){
//	WAP to input the 5 employees name and salary using structure and display the records in proper format.
int a,b;
for(a=0;a<5;a++){
	printf("Enter the Name of Employee %d : ",a+1);
	scanf("%s",&employess[a].name);
	printf("Enter the Salary Amount of <%s> : ",employess[a].name);
	scanf("%d",&employess[a].salary);
	printf("\n\n");
}
printf("____ \t _____________ \t ______ \n");
printf("S.N. \t Employee Name \t Salary \n");
printf("____ \t _____________ \t ______ \n");

for(b=0;b<5;b++){
	printf("%2d \t %13s \t %8d \n",b+1,employess[b].name,employess[b].salary);
	
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
