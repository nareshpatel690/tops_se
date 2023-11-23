#include<stdio.h>


 main()
{
	int choice;
	
	
	printf("press 1 for find even odd\n");
	printf("press 2 for find max of two numbers\n");
	printf("press 3 for find the leap year or not\n");
	printf("press 4 for check if person can eligible for licence or not\n");
	scanf("%d",&choice);
	
	
	if(choice==1)
	{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	
if(num%2==0)
{
	printf("number is even");
}
	else
	{
		printf("number is odd");
	}
	
	else if (choice==2)
	int num1,num2;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
		printf("num 1 is max");
		
		else
		{
			printf("num 2 is max");
			
		}
		
		else if (choice==3)
		{
			int year;
			
			printf("enter year");
			scanf("%d",&year);
			if("year%4==0")
			{
				printf("this is leap year");
				
				
				
					
		
			}
			else
			{
				printf("this is not leap year");
		
		
			}
			
			
		}
		
		
	}
	
}
	
}