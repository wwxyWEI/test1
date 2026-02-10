#include <stdio.h>
int main()
{
	int a[8],i,j,temp = 0;
	printf("shu ru");
	for(i = 0;i<8;i++)
	{
		scanf("%d",&a[i]);
		printf("\n");
	}
		int flag;
		for(i = 7;i > 0;i--)
	{
		flag = 1;
		int k = 0;
		for(j = 1;j <= i;j++)
		{
			if(a[k]<a[j])
			{
				k = j;
				flag = 0;
			}
		}
			if(k != i)
			{
				temp = a[k];
				a[k] = a[i];
				a[i] = temp;
			}
		
		if(flag == 1)
		{
			break;
		}
	}
	for(i = 0;i < 8;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

