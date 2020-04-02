#include<stdio.h>
int main(){ 
int m,n,a,ti,les; 
scanf("%d%d%d",&m,&n,&a); 
if(m%a==0){
     ti=(m/a); 
}
 else if(m%a>0){
     ti=(m/a)+1; 
}
 if(n%a==0){
     les=(n/a); 
}
 else if(n%a>0){
     les=(n/a)+1; 
}     
printf("%d\n",ti*les);
 }   
