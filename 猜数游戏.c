#include<stdio.h>

int main()
{
    
    int m=0;
    printf("«Î ‰»Î£∫");
    scanf("%d",&m);

   int foot = m/30.48;
    int inch = ((m/30.48)-foot)*12;

    printf("%d %d",foot,inch);
    return 0; 
 } 
