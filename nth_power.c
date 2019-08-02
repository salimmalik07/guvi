//Find the nth term of the series.
//1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, …
#include<stdio.h>
#include<math.h>
void even (int x)
{
   int i, sum =0;
   for( i=0; i<x; i++)
   {
      sum =pow(3,i);
   }
   printf("%d",sum);
}

void odd(int x)
{
   int i,sum =0;
   for( i=0; i<x; i++)
   {
      sum=pow(2,i); 
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
