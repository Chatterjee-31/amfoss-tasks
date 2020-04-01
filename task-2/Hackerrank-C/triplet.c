#include <stdio.h>


int main(){
    int p=0,q=0;
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int b[3];
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for(int i=0;i<3;i++){
        if(a[i]>b[i])
            p++;
        else if(b[i]>a[i])
            q++;
    }
    printf("%d %d \n",p,q);
    return 0;
}
