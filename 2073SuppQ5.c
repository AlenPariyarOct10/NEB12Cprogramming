#include<stdio.h>

struct data{
	
	char name[20];
	char address[20];
	int salary;
	
}employee;

int main(){
	
	FILE*DataFile = fopen("staff.dat","w");
	
	
	printf("Enter The Name of Employee: ");
	scanf("%s",&employee.name);
 	printf("\n");
 	
 	printf("Enter the Address of Employee : ");
 	scanf("%s",&employee.address);
 	printf("\n");
 	
 	printf("Enter the Salary : ");
 	scanf("%d",&employee.salary);
 	printf("\n");
 	
 	fprintf(DataFile,"###### Employee Data ######\n");
 	fprintf(DataFile,"Name : %s\n",employee.name);
 	fprintf(DataFile,"Address : %s\n",employee.address);
 	fprintf(DataFile,"Salary : %d\n",employee.salary);
 	
 	if(DataFile==NULL){
 		printf("Sorry Operation Failed");
	 }else if (DataFile!=NULL){
	 	printf("SuccesFully Stored.");
	 }
 	
 	
 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}