
#include<stdio.h>

int main()
{
    
    int m=0;
    printf("请输入：");
    scanf("%d",&m);

   int foot = m/30.48;
    int inch = ((m/30.48)-foot)*12;

    printf("英尺为%d 英寸为%lf\n",foot,inch);
    return 0; 
 } 
 
 
 
 //总结：1.我不小心在printf中进行了计算，所以程序没有达到理想中的运行结果； 
   //    2.我不知道如何有效的取整，所以写了一些乱七八糟的东西。 
