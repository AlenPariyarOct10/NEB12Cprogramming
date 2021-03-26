#include<stdio.h>


struct employees{
	int emp_id;
	char name[20];
	char address[20];
	char post[15];
}employee[19];

int main(){
	
//	WAP to input employee id, name, address and post of 20 employees and display them properly


for(int a = 0; a<20;a++){
	printf("\nEnter The Name of Employee %d : ",a+1);
	scanf("%s",&employee[a].name);
	printf("\nEnter The address of %s : ",employee[a].name);
	scanf("%s",&employee[a].address);
	printf("\nEnter The Employee Id of %s : ",employee[a].name);
	scanf("%d",&employee[a].emp_id);
	printf("\nEnter The Post of %s : ",employee[a].name);
	scanf("%s",&employee[a].post);
	printf("\n\n");
	
	
}

	printf("\n_____________\t __ \t ______ \t ____");
	printf("\nEMPLOYEE NAME \t Id \t Address \t Post");
	printf("\n_____________\t __ \t ______ \t ____\n");
	
	for(int c = 0; c<20;c++){
		printf("%13s\t %2d \t %6s \t %8s \n",employee[c].name,employee[c].emp_id,employee[c].address,employee[c].post);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}