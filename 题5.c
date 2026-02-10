#include <stdio.h>
//#include <stdlib.h> 
int main()
{
    int t,N,U,D;
    scanf("%d %d %d",&N,&U,&D);
    if(D>=U||N>100)
    {return -1;}
    int height = 0;
    int minutes = 0;
    while(height<N)
    {
        if(minutes%2==0)
        {height+=U;}
        else{height-=D;}
        minutes++;
    }
    printf("%d",minutes);
    //system("pause");
    return 0;
}
