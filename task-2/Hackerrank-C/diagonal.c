#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a[10][10],n,l=0,r=0,i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
         l=l+a[i][i]; 
    for(i=0;i<n;i++)       
         r=r+a[i][n-1-i];
    s=abs(l-r);
    printf("%d",s);
    return 0;
}
