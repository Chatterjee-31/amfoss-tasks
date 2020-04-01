#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int max;
  int c = 0;

 int a[n];
 for(int i=0; i<n; i++){
 scanf("%d", &a[i]);
 }
max= a[0];

for (int j=0; j<n; j++){
if(a[j]>max){
 max=a[j];
  }
 }

for (int k=0; k<n; k++){
 if (a[k]==max){
  c++;
   }
 }
 printf("%d",c);
}


