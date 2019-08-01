

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c,det;
    float r1,r2,imaginary,real;

    scanf("%d%d%d",&a,&b,&c);
    det=b*b-4*a*c;
    if(det>0)
    {
       r1=(-b+sqrt(det))/(2*a);
       r2=(-b-sqrt(det))/(2*a);
       printf("%f",r1);
    printf("%f",r2);
    }
    else if(det==0)
    {
       r1=r2=-b/(2*a);
        printf("%f",r1);
    }
    else 
    {
      real = -b/(2*a);
       imaginary = sqrt(-det) / (2*a);
       printf("root1 = %.2f + %.2fi  root2 = %.2f - %.2fi", real, imaginary, real, imaginary);
    }            

    
    return 0;
}
