#include <stdio.h>
#include <math.h>
int main()
{
    int A,N,S,n,r;
    scanf("%d %d",&A,&N);
    if(A<1||A>10||N<0||N>100000)
    {return -1;}
    for(n=0;n<N;n++)
    {
        r+=A*pow(10,n);
        S+=r;
    }
    printf("%d",S);
    return 0;
}
