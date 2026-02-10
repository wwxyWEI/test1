#include<stdio.h>
void chazhao(int arr[], int a, int r, int l);
int main()
{
	int arr[] = { -12,0,6,16,23,36,6,10,22,51,75};
	int i, j, temp,a;
	int r = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	int l = len - 1;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j <len-1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("输入数字");
	scanf_s("%d", &a);
	chazhao(arr, a, r, l);
	return 0;
}
void chazhao(int arr[], int a, int r,int l)
{
	if (r + 1 != l)
	{
		if (a == arr[(r + l) / 2])
		{
			printf("找到了");
		}
		else if (a > arr[(r + l) / 2])
		{
			r = (r + l) / 2;
			chazhao(arr,a,r,l);
		}
		else if (a < arr[(r + l) / 2])
		{
			l = (r + l) / 2;
			chazhao(arr, a, r, l);
		}
	}
	else
	{
		if (a == arr[l] || a == arr[r])
		{
			printf("找到了");
		}
		else
		{
			printf("不存在");
		}
	}
}
