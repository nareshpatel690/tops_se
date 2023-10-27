#include<stdio.h>

int main()

{
	int marks;
	
	
	printf("enter your marks \n");
	scanf("%d",&marks);
	
	if (marks<0   ||   marks>100)
	
{
	

	
		printf("enter valid marks \n");
	}
	
	
	
	
	else
	{
	
{
		switch(marks/10)
		
			case 10 :
		case 9  :
		case 8   :
			
			printf("A++ \n");
	
		
		
		   case 7:
			case 6 :
				case 5 :
		
		printf("A+ \n");
		
		break ;
		
		
		case 4 :
			printf("B \n");
			
			break ;
			
			case 3
			case 2
			case 1
			
		printf("fail \n");
	}
		
	}
	}
		
		
		
		
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}