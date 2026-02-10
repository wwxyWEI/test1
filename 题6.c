#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y,f;
    int flag=0;
    for(y=0;y<100&&!flag;y++)
    {
        for(f=0;f<100&&!flag;f++)
        {
            if(f*100+y-n==y*200+2*f)
              {
			    flag=1;
                printf("%d.%d",y,f);
            }
        }
    }
    if(!flag){printf("No Solution");}
    return 0;
}
