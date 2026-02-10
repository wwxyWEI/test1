#include<stdio.h>
int A(int a[][100],int a1,int b1);
int main()
{
	int row,col;
	int n,a[100][100];
	printf("shuru");
	scanf("%d",&n);
	

	for(row = 0;row<n;row++)
	{
		for(col = 0;col<n;col++)
		{
			A(a,row,col);
		}
	}
	for(row = 0;row<n;row++)
	{
		for(col = 0;col<n;col++)
		{
			printf("%3d",a[row][col]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
int A(int a[][100],int a1,int b1)
{
	int i,j;
	if(a1<b1)
	{
		a[a1][b1] = a1 + 1;
	}
	else 
	{
		a[a1][b1] = b1 + 1;
	}
	return 0;
}
