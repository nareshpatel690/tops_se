#include<stdio.h>

int main()
{

char week ;


printf("enter your day \n");

scanf("%c",&week);

switch(week)
{
	
	
	
	case 'm':
		printf("monday");
		
		break ;
		
		case 't':
		
		printf("tuesday");
		
		break ;
		
		case 'w':
			
			printf("wednesday");
			
			break;
			
			
			case 'T':
			
			printf("thusday");		
			break ;
		
		
		case 'f':
			
			printf("friday");
			
			break;
			
			
			case 's':
				
				printf("staurday");
				
				
				break;
				
				
				case 'S':
					
					printf("sunday");
					
					break;
					
					
					default:
						
						printf("enter valid day \n");
}
	
	
	
	
	
	
}