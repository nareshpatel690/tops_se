#include<stdio.h>

int main ()

{
	
	
 char choice;
 
 
 printf("\t\t\t\t\t\t\t welcome to pokemon world \n");
 
 printf("choose one pokemon charmende or pikachu\n" );
 
 printf("press C for charmender and press P for pikachu\n");
 
 
 fflush(stdin);
 scanf("%c",&choice);
 
 
 if (choice == 'C' || choice == 'c'      ){
 
 
 printf("good choice charmender will help you in your journey \n");
 
 printf("begin your journey from palt town village \n ");
	
	printf("you encounter new  pokemon \n ");
	
	printf("for fight press F  for run press R \n");
	
	fflush(stdin);
	scanf("%c",&choice);
	

	
	
	}
	
	
	else if ( choice == 'P' || choice == 'p')
	
	{
		printf("good choice pikachu will help you in your journey \n");
 
 printf("begin your journey from palt town village \n ");
	
	printf("you encounter new  pokemon \n ");
	
	printf("for fight press F  for run press R \n");
	
	fflush(stdin);
	scanf("%c",&choice);
	}

if	( choice == 'F' || choice == 'f'){


printf("you won the fight \n");





printf("you want to catch the pokemon \n"),






printf("to catch the pokemon press C \n");

fflush(stdin);
scanf("%c",&choice);}

if ( choice == 'c' || choice == 'C')
{
	printf(" gotta you catched balbasor \n ");
	
	
	
	
	
	
	printf("won the game now play tommrow \n");
}



else if ( choice == 'R' || choice == 'r')
{ printf("you are coward it took me so much time to write this much and i dont know how to write other part \n");

printf("lost the game play again \n");
}
 
 




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}