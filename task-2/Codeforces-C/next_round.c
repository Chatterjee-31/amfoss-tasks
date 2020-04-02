#include<stdio.h>

int main()
{
int a[100];
int n,k,count = 0;
scanf("%d%d",&n,&k);
for(int i = 0; i < n ; i++)
{
 scanf("%d",&a[i]);
}
for(int i = 0; i < n; i++)
{
  if(a[i]>=a[k-1] && a[i]>0){
   count++;
    }
 }
printf("%d\n",count);
return 0;
}
