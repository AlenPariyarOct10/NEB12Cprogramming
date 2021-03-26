#include<stdio.h>

struct stds{
	char name[20];
	int stdNo;
	int marks;
	char field[18];
	
	
}students[49];

int main(){
	
//	WAP to store 50 records of students using fields, std. no., name and mark. Display te name and mark of the students
int a,b;
for(a=0;a<50;a++){
	printf("#######STUDENTS RECORDS SYSTEM########\n");
	
	printf("Enter the name of Student %d : ",a+1);
	scanf("%s",&students[a].name);
	printf("Enter the Student Number of <%s> : ",students[a].name);
	scanf("%d",&students[a].stdNo);
	printf("Enter the Faculty of <%s> : ",students[a].name);
	scanf("%s",&students[a].field);
	printf("Enter the Total Marks Obtained by <%s> :",students[a].name);
	scanf("%d",&students[a].marks);
	
	printf("\n\n");
}


printf("######### RESULT #######\n");
printf("___________ \t _____________ \t _______ \t ______________\n");
printf("Student No. \t Students Name \t Faculty \t Marks Obtained\n");
printf("___________ \t _____________ \t _______ \t ______________\n");

for(b=0;b<50;b++){
	
printf("%9d \t %13s \t %10s \t %3d\n",students[b].stdNo,students[b].name,students[b].field,students[b].marks);
	
}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
