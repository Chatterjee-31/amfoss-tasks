#include<stdio.h>
int main(){
int n,i,j,k;

scanf("%d",&n);
for (i=0; i<n+1; i++){
 for (j=0; j<n-i+1; j++){
    printf(" ");
         }
    for (k=i; k>0; k--){
     printf("#");
   }
    printf("\n");
  }
return 0;
}


