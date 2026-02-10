#include<stdio.h>
void fun(char a[],int k);
int main()
{
	char a[100];
	int i,k = 0;
	printf("\nLL\n");
	for(i = 0;i<10;i++)
	{
		scanf("%c",&a[i]);
	}
	getchar();
	a[10] = '\0';
	
	i = 0;
	while(i<10&&a[i]=='*')
	{
		i++;
	}
	k = i;
	fun(a,k);
	printf("%s\n",a);
	return 0;
}
void fun(char a[],int k)
{
	int j,i;
	for(j = 0;a[k]!=0;j++,k++)
	{
		a[j] = a[k];
	}
	a[j] = '\0';
}
