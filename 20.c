#include<stdio.h>

int main()
{
	int r;
	int i,j;
	printf("enter the numbers of rows: ");
	scanf("%d",&r);
	
	int c;
	printf("enter the numbers of coloum: ");
	
	scanf("%d",&c);
	
	int arr[r][c];
	for( i=0;i<r;r++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	printf("\n");
		for( i=0;i<r;r++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}	
	printf("\n");
}