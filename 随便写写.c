#include <stdio.h>
void swap(int a,int b);

int main()
{
	int x = 5;
	int y = 6;
	swap(5,6);
	printf("%d %d",swap(5,6));
	
	return 0;
	
}

void swap(int a,int b)
{
	int t = a;
	a = b;
	b = t;
}
