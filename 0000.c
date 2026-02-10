#include<stdio.h>
int main()
{
	int x,y,f;
	scanf("%d",&x);
	y=x/abs(x);
	
	switch(y){
	
	case -1: f=-1; break;
	case 0:  f=0;   break;
	default: f=2*x; break;
		
	}
	printf("%d\n",f);
	return 0;
}
