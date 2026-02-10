#include<stdio.h>
int main()
{	char ch;
	printf("请输入字符，以Enter键结束\n");
//ch=getchar()!='\n	表示识别到换行就结束循环，也就实现了按下Enter键结束。 
	while((ch=getchar())!='\n')
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{	putchar(ch^32);
	}	
	else
	{	putchar(ch);
	}	
}
		printf("\n");
		return 0; 
}

//nb,好巧妙 。 
//该代码仅需将if（）中后半部分删除即可满足题目要求，但我想实现所有大小写同时改变，于是加以了如此改进。 
