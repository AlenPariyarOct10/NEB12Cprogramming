#include<stdio.h>

float si(float p, float t, float r);

int main(){
	float p,t,r;
//	Write a program to read the principle, time and rate. Find the simple interest using function.

	
	printf("\nEnter the principal amount : ");
	scanf("%f",&p);
	printf("\nEnter the Time duration : ");
	scanf("%f",&t);
	printf("\nEnter the Rate : ");
	scanf("%f",&r);
	float ans = si(p,t,r);
	printf("%.4f",ans);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

float si(float p, float t, float r){
	float simpleIn = p*t*r/100;
	return simpleIn;
}
