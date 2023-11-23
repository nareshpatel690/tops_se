#include<stdio.h>



	
	float base,h,area,h,r;
	int l,b,choice;
int triangle()
{
	
	printf("enter base and height of triangle\n");
	scanf("%f%f",&base,&h);
	printf("area of triangle is : %.2f\n",h*base/2);
}
	
int rectangle()
{
	
	printf("enter length and breath of rectangle\n");
	scanf("%d%d",&l,&b);
	
	printf("area of rectangle is : %d\n",l*b);
	
	
}

int circle()
{
	
	printf("enter radius of circle\n");
	scanf("%f",&r);
	area = 3.14*r*r;
	printf("area of circle is : %.2f\n",area);
	
	
}



int main()
{
	printf("enter your choice\n");
	printf("type 1 for circle\n");
	printf("type 2 for triangle\n");
	printf("type 3 for rectangle\n");
	
	scanf("%d",&choice);
	
	if (choice==1)
	
	{
		circle();
	}
	
	else if(choice==2)
	{
		triangle();
	}
	
	else if (choice==3)
	{
		rectangle();
	}
	
	else
	{
		printf("enter valid input\n");
	}
}

