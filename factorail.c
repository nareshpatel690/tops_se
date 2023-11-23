#include<stdio.h>

main()

{
	int number,fact=1,i;
	printf("enter a number");
	
	scanf("%d",&number);
	
	
	
	for(int i=1;i<=number;i++)
	{
		fact=fact*i;
	}
printf("factorial=%d",fact);
	
	
}