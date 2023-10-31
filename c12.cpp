#include<stdio.h>

int main()
{
	int num[100];
	char name[100], choice;
	float total=0,per=0;
	
	
		void func(void);
		{
			
	fflush(stdin);
	printf("enter your name\n");
	gets(name);
	printf("your name is %s\n",name);
	for(int i=0;i<5;i++){
	printf("enter your marks");
	scanf("%d",&num[i]);
	total = total + num[i];
	}
	printf("your sum of marks is : %.2f\n",total);
	per = total/5;
	printf("percentage of %s is %.2f\n",name, per);
	
	fflush(stdin);
	printf("do you want check another students marks\n");
	scanf("%c",&choice);	
	}
	
	
	do{
		func();
	}
	while(choice == 'y');
 	
 	if(choice != 'y'){
 		printf("invalid input\n");
 		printf("please enter a y to enter\n");
 	if(choice != 'y'){
 		func();
	 }
	 
 	
 		
	 }















}
