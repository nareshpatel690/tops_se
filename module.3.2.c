#include<stdio.h>
void main()
{
	int a,b,option;
	printf("simple calculator\n");
	printf("enter your first value\n");
	scanf("%d",&a);
	printf("enter your second value\n");
	scanf("%d",&b);
	printf("\npress 1 for addition\n");
	printf("\npress 2 for subtraction\n");
	printf("\npress 3 for multiplication\n");
	printf("\npress 4 for division\n");
	
	printf("\nenter your choice\n");
	scanf("%d",&option);
	
	switch(option)
{
	case 1 : 
	   printf("sum=%d",a+b);
	
	    break;
		case 2 : 
	   printf("substraction=%d",a-b);
	
	    break;

	    
		case 3 : 
	   printf("multiplication=%d",a*b);
	
	    

	    break;
	case 4 : 
	   printf("divison=%d",a/b);
	
	    break;
	    
		default: 
		printf("press valid option\n");
	
}
	
}