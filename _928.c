#include<stdio.h>
int main()
{

   char a[6];
   int n,count=0,sum=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {

       for(int j=0;j<5;j++)
       {
           scanf("%c",&a[j]);
           if(a[j]=='A')
           {
               count++;

           }
           if(a[j]=='B')
           {
               sum++;
           }
       }
       if(count>sum)
       {
           printf("A\n");
       }
       else
       {
           printf("B\n");
       }
       count=0,sum=0;
   }
   return 0;
}
