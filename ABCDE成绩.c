#include <stdio.h>
int main()
{
	int a=0;
	

	printf("请输入你的成绩\n");
	scanf("%d",&a);
	printf("你的输入的成绩为：%d\n",a); 

	
	if(90<=a&&a<=100)
	{	printf("你的成绩为A");
	}
	else if(80<=a&&a<90)
	{	printf("你的成绩为B");
	}
	else if(70<=a&&a<80)
	{	printf("你的成绩为C");
	}
	else if(60<=a&&a<70)
	{	printf("你的成绩为D");
	}
	else if(0<a&&a<60)
	{	printf("你的成绩为E");
	}
	
	
	return 0;
}
