#include<stdio.h>


int main()

{
int choice=0;
int a =0 , b =0;
float c=0, d=0;

int sub()
{
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	printf("total is %d\n",a-b);
	}
int multi()
{
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	printf("total is %d\n",a*b);
	}
int div()
{
	printf("enter two number\n");
	scanf("%f%f",&c,&d);
	printf("total is %.2f\n",c/d);
	}
int add()
{
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	printf("total is %d\n",a+b);
	}

printf("calculator\n");
printf("choose your option\n");
printf("press 1 for addtion\n");
printf("press 2 for substraction\n");
printf("press 3 for multiplication\n");
printf("press 4 for divison\n");
scanf("%d",&choice);

if (choice==1){
printf("you choose addtion");
add();
}

else if(choice==2){
	printf("you choose substraction");
	sub();
}

else if (choice==3){
	printf("you choose multiplication");
	multi();
}
	
else if(choice==4){
		printf("you choose divison");
		div();
	}
	
else {
	  printf("choose valid input");
	  
	  }
}
