#include<stdio.h>

int main()
{
	int year,month,day,D;
	printf("请输入年，月，日。\n");
	scanf("%d %d %d",&year,&month,&day);
	//如果是闰年 
	if((year%4==0&&year%100!=0)||(year%400==0))
	{	//偶数月份 
		if(month%2==0&&month!=2&&month>2&&month<8)
		{
			D=29+(month/2)*31+day+(month/2-2)*30;
			printf("该日期为该年的第%d天.",D);
		}
		if((month%2==0&&month>8&&month<=12))
		{
			D=29+31+4*31+(month/2-4)*30+day+(month/2-3)*30;
			printf("该日期为该年的第%d天.",D);
		}
		if(month==2)
		{
			D=31+day+4*31+(month/2-4)*30+day;
			printf("该日期为该年的第%d天.",D);
		 } 
		if(month==8)
		{
			D=29+day+4*31+2*30;
			printf("该日期为该年的第%d天.",D);	
		}
		//奇数月份 
		if(month%2==1&&month>2&&month<8)
		{
			D=29+((month+1)/2-1)*31+((month-1)/2-1)*30+day;
			printf("该日期为该年的第%d天.",D);
		}
		if(month%2==1&&month>8&&month<12)
		{
			D=29+31+day+4*31+(month%3-1)*30;
			printf("该日期为该年的第%d天.",D);	
		}
		if(month==1)
		{
			D=day;
		}
	
	}
	//如果是平年
	else if((year%4!=0)||(year%100==0&&year%400!=0))
	{
//偶数月份 
		if(month%2==0&&month!=2&&month>2&&month<8)
		{
			D=28+(month/2)*31+day+(month/2-2)*30;
			printf("该日期为该年的第%d天.",D);
		}
		if((month%2==0&&month>8&&month<=12))
		{
			D=28+31+4*31+(month/2-4)*30+day+(month/2-3)*30;
			printf("该日期为该年的第%d天.",D);
		}
		if(month==2)
		{
			D=31+day;
			printf("该日期为该年的第%d天.",D);
		 } 
		if(month==8)
		{
			D=28+day+4*31+2*30;
			printf("该日期为该年的第%d天.",D);	
		}
		//奇数月份 
		if(month%2==1&&month>2&&month<8)
		{
			D=28+((month+1)/2-1)*31+((month-1)/2-1)*30+day;
			printf("该日期为该年的第%d天.",D);
		}
		if(month%2==1&&month>8&&month<12)
		{
			D=28+31+day+4*31+((month+1)/2-3)*30;
			printf("该日期为该年的第%d天.",D);	
		}
		if(month==1)
		{
			D=day;
		}
		
	}

	return 0;
}
