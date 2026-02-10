#include<stdio.h>
#define M 4
#define N 5
//void max(int x[0]);
int a[][5] = {{45,23,18,0,99},{33,7,54,42,75},{0,99,17,65,54},{99,21,6,7,7}};
int main()
{
	//M,N分别为行数和列数; 
	//int a[M][N];
	int i,j;
	//取数，这里直接用题目给的数; 
	printf("k0");
/*	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}*/
	//用来计数;
	int count = 0;
	//先找到最大值; 
	int max = a[0][0];
	for(i=0;i<M;i++)
	{
		for(j=1;j<N;j++)
		{
			if(max<=a[i][j])
			{
				max = a[i][j];
			}
			else{
				continue;
			}
		}
	}
	
	printf("最大值是%d\n",max);
	//另起一个嵌套for循环，找到位置，并计数;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			if(a[i][j]==max)
			{
				count++;
				printf("在第%d行，第%d列有它\n",i+1,j+1);
			}
			else{
				continue;
			}
		}
	}
	printf("一共出现了%d次",count); 
	return 0;
}
