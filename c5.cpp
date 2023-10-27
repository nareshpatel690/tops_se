#include<stdio.h>


int main()

{
	char name[100];
	float marks;
	float total = 0;
	
	printf("enter your name \n");
	gets(name);
	
	printf("enter your marks\n");
	scanf("%f",&marks);
	
	total = total + marks;
	
	scanf("%f",&marks);
	total = total + marks;
	
	scanf("%f",&marks);
	
	total = total + marks;
	
	
	printf("total is %f\n",total);
	
	float percentage;
	
	percentage = (total*100)/300;
	
	printf("total percentage obtain is %f\n",percentage);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}