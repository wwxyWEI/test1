#include <stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        do{
            j=1;
            printf("%d*%d=%d   ",i,j,i*j);
            j++;
        }while(j<=N);
        printf(" \n");
    }
    return 0;
}
