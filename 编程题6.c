#include <stdio.h>
#include <math.h> 
int main()
{
	int x,a;

	printf("请输入正整数\n");
	if(x<=0||x!=(int)x)
	{	
		printf("让你输入正整数你个北七！\n"); 
	}
	scanf("%d",&x);
	printf("%d的素数因子有：\n",x);
	//先从2开始，因为任何正整数都可以写成和2相关的表达式，即n=2^k+m,k属于有理数，并且这么做可以使得后面只用处理奇数素数因子。
	//不用if语句，因为if语句只会提取出一个2，但一个正整数的素数因子2不一定只有一个 。 
	while(x%2==0)
	{
		printf("2 ");
		x=x/2;
	}
	
	
	for(a=3;a<sqrt(x);a+=2)
	{	
		while(x%a==0)
		{	
			printf("%d ",a);
			x=x/a;
		}
	}
	
	if(x>2);
	{
		printf("%d ",x);
	} 
	printf("\n");
	return 0;
}
