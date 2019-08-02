/*The program will recieve 3 English words inputs from STDIN
These three words will be read one at a time, in three separate line
The first word should be changed like all vowels should be replaced by $
The second word should be changed like all consonants should be replaced by #
The third word should be changed like all char should be converted to upper case
Then concatenate the three words and print them*/
#include<stdio.h>
#include<string.h>
int main()
{
   char a[25],b[25],c[25];
   int i;
   scanf("%s",a);
    scanf("%s",b);
     scanf("%s",c);
    for(i=1; i<=strlen(a); i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            a[i]='$';
        }
        else
        {
            break;
        }
     }
      for(i=1; i<=strlen(b); i++)
      {
     if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u'&&b[i]!='A'&&b[i]!='E'&&b[i]!='I'&&b[i]!='O'&&b[i]!='U')
     {
         b[i]='#';
     }
     else
     {
         break;
     }
      }
       for(i=0; i<=strlen(c); i++)
       {
           if(c[i]>='a'&&c[i]<='z')
           c[i]=c[i]-32;
       }
       printf("%s%s%s",a,b,c);
       return 0;
     
   
}
