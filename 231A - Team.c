#include<stdio.h>
int main()
{
   int n,a,b,c,p=0,u;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       u=0;
       scanf("%d %d %d",&a,&b,&c);
       if(a==1)
       {
           u++;
       }
       if(b==1)
       {
           u++;
       }
       if(c==1)
       {
           u++;
       }
       if(u>=2)
       {
           p++;
       }
   }
   printf("%d\n",p);
   return 0;
}
