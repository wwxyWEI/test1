#include <stdio.h>
#include <stdlib.h>
int main()
{
	int u,x,y;/*u表示九头鸟，x表示鸡，y表示兔子*/
	
	for(u=1;u<=11;u++)
	{
		for(x=1;x<=100;x++)
		{
			for(y=1;y<=100;y++)
			{
				if(9*u+x+y==100&&2*u+2*x+4*y==100)
				{
					printf("九头鸟的个数为%d，鸡的个数为%d，兔子的个数为%d\n",u,x,y);	
				}
			}
		}
	 } 
	
	
	system("pause");
	
	return 0;
 } 
