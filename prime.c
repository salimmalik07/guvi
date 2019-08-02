#include<stdio.h>
void prime(int x)
{
    int count=0;
    int i;
    for(i=2; i<x; i++)
    {
        if(x% i==0)
        {
            count++;
            break;
        }
    }
    if(count==0){
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}
void check(int x)
{
    if(x>0)
    {
       prime(x);
    }
    else
    {
        printf("no");
    }
}

int main()
{
int x;
scanf("%d",&x);
check(x);
}
