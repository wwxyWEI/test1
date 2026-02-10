#include<stdio.h>
int main()
{
    int h,w;
    int shuzu[]={2,0,2,5};

    scanf("%d %d",&h,&w);
    int i,j,count = 1;

    for(i=0;i<h;i++)
{
    int start = i%4;
    for(j=0;j<w;j++)
    {
        printf("%d",shuzu[(start+j)%4]);
    }
    printf("\n");
}
    return 0;
}