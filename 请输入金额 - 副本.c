#include <stdio.h>

int main()
{
    int price = 0;

    printf("请输入金额（元）：");
    scanf("%d", &price);
    
    int num=0;
    
    printf("钱包有（元）：\n");
    scanf("%d",&num);
    

    int change = num - price;

    printf("找您%d元。\n", change);

    return 0;
}
