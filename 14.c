#include<stdio.h>

int choice,iphones,storagec=0,chr,pr,st1,st2,st3,cart;

//-----------------------------------------------------------------------------------------------
int addcart()
{
	printf("do you want to add this in your cart\n");
	printf("please choose 1\n");
	scanf("%d");
	
	if(cart==1)
	{
	printf("plese check your cart before paymenent");
	}
	
	else
	{
		printf("enter valid input\n");
	}
}

//-----------------------------------------------------------------------------------------------
int colour()
{
	printf("please choose colur of your choice\n");
	printf("1)red\n2)white\n3)black\n");
	scanf("%d",&chr);
	if(chr==1)
	{
		printf("you chooce red colour\n");
	}
	else if(chr==2)
	{
	 printf("you choose white colour\n");
	 
	}
	else if(chr==3)
	{
		printf("you choose black colour\n");
	}
	else
	{
		printf("choose valid colour\n");
	}
}


//-----------------------------------------------------------------------------------------------

int storage(st1,st2,st3)
{
	printf("please choose storage capacity\n");
	printf("1)128gb\n2)256gb\n3)512gb\n");
	scanf("%d",&storagec);
	if (storagec==1)
	{
		printf("you choose 128gb\n");
		printf("price is %d\n",st1);
		addcart();
		
	}
	else if(storagec==2)
	{
		printf("you choose 256gb\n");
		printf("price is %d\n",st2);
		addcart();
	}
	else if(storagec==3)
	{
		printf("you choose 512\n");
		printf("price is %d\n",st3);
		addcart();
	}
	else
	{
		printf("choose valid storage\n");
	}
	
}

//-----------------------------------------------------------------------------------------------
int iphone()
{
	printf("choose from our wide varity of phones\n");
	printf("iphone 12\n");
	printf("iphone 13\n");
	printf("iphone 14\n");
	printf("iphone 15\n");
	scanf("%d",&choice);
	if(choice==12)
	{
		printf("you choose iphone12\n");
		colour();
		storage(50000,60000,70000);
		
	}
	else if (choice==13)
	{
		printf("you choose iphone13\n");
		storage();
	}
	else if(choice==14)
	{
		printf("you choose iphone 14\n");
		storage();
	}
	else if(choice==15)
	{
		printf("you choose iphone 15\n");
		storage();
	}
	else
	{
		printf("choose available phone\n");
	}
}

//-----------------------------------------------------------------------------------------------

int brand_func(){
		printf("welcome to apple store\n");
	printf("choose from our varity of range\n");
	printf("1)iphone\n2)apple watch\n3)airpods\n");
	scanf("%d",&choice);
	if (choice==1)
	{
		iphone();
	}
	else if(choice==2)
	{
	//	apple_watch();
	}
	else if  (choice==3)
	{	
	//	airpods();		D
	}
   else
    {
		printf("enter valid choice/n");
    }
	
	}

//-----------------------------------------------------------------------------------------------


main()
{
brand_func();		
}

