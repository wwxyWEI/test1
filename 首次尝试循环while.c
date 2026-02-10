#include <stdio.h>
int main()
{
	int a;
	int n=0;
	scanf("%d",&a);	
	n++;
	a/=10;
//有了以上两行，就可以输入0了，反之不行。 
	
	while(a>0)
	{	n++;
		a/=10;
		printf("a=%d,n=%d\n",a,n);
	}
	printf("%d",n);
	return 0;
	
}
