#include<stdio.h>
#include<stdlib.h>
int main()
{
	//word表状态,0为遇到空格,1为遇到单词; 
	int word = 0;
	int num = 0,i = 0;
	char str[100];
	char c;
	//输入字符;
	 
	while((str[i++] = getchar())!= '\n');
	
	str[i] = '\0';
	for(i = 0;(c = str[i])!='\0';i++)
	{
		//遇到空格; 
		if(c==' ')
		{
			word = 0;
		}
		//遇到单词,改变word,然后继续循环，不执行之后的任何if语句再次直到遇到空格; 
		else if(word==0)
		{
			word = 1;
			num++;//记一次，即记录一个单词数; 
		}
	}
	printf("有%d个单词",num);
	return 0;
 } 
