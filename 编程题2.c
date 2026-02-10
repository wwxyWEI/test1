#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int x,min,count;
	printf("请输入三个整数.\n");
	scanf("%d",&x);
	min=x;
	count=1;
	while(count<3)
{	if(x<min)
	min=x;
	scanf("%d",&x);
	count++;
}
	printf("最小值为%d\n",min);
	system("pause"); 
	return 0; 
 } 
