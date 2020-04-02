#include<stdio.h>
#include<string.h>
int main(){
int i,n,op=0;
char x[3];
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%s",x);
if(strcmp(x,"X++")==0){
  op=op+1;
}
  else if (strcmp(x,"++X")==0){
        op=op+1;
    }
if(strcmp(x,"X--")==0){
     op=op-1;}
    else if (strcmp(x,"--X")==0){
        op=op-1;
  }
}

printf("%d\n",op);

return 0;
}

