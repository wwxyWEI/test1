#include<stdio.h>
int main()
{
	//确定数组长度和输入数组内容； 
	int i,N;
	scanf("%d",&N);
	int a[N]; 
	printf("k");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n-----\n");
	//s输入要查找的数；
	int target;
	 scanf("%d",&target);
	 //设置是否查找到的标志,0为没有，1为有； 
	 int found = 0;
	 //设置左右边界；
	 int left = 0;
	 int right = N-1;
	//最重点的地方，我纠结了很久； 
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(target==a[mid])
		{
			printf("找到了");
			found = 1;
			break;
		}
		//调整右边界； 
		else if(target<a[mid])
		{
			right=mid-1;
		}
		//调整左边界； 
		else
		{
			left=mid+1; 
		}
	}
	if(found==0)
	printf("未找到");
	
	return 0;
 } 
