#include <stdio.h>


int main()
{
	int hour1,min1;
	int hour2,min2;

	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	
	int t1=hour1*60+min1;
	int t2=hour2*60+min2;
	
	int t=t1-t2;
	
	printf("时间差是%d时，%d分",t/60,t%60); 
}
