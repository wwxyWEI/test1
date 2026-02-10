#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<35;i++)
	{
		for(j=1;j<35;j++)
		{
			if(4*i+2*j==94&&i+j==35)
			{printf("鸡的个数为%d,兔的个数为%d.\n",j,i);
			}
		}
	}

	return 0;
 } 
