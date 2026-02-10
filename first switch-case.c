#include <stdio.h>
int main()
{	
	printf("ÇëÊäÈë±äÁ¿£º");
	double x,y;
	scanf("%lf",&x);
	
	switch(x>0)
	{
	case 1:y=x;break;
	case 0:y=2*x;break;
	default:y=0;break;
		
	}
	
	printf("%lf\n",y);
	return 0;
}
