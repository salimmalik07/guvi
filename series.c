//Find the 15th term of the series?
//         0,0,7,6,14,12,21,18, 28
#include<stdio.h>
void even (int x)
{
   int i, sum =0;
   for( i=0; i<x-1; i++)
   {
      sum=sum+6; 
   }
   printf("%d",sum);
}

void odd(int x)
{
   int i,sum =0;
   for( i=0; i<x-1; i++)
   {
      sum=sum+7; 
   }
   printf("%d",sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    
    {
       even(n/2); 
        
    }
    else
    {
        odd(n/2+1);
     }
    
}
