#include<stdio.h>
#include<string.h>
int main(){
int n,i,length;
char w[100];
scanf("%d", &n);
for(i=0; i<n; i++){
scanf("%s",w);
length=strlen(w);
if (length>10){
 printf("%c%d%c",w[0],length-2,w[length-1]);
}
else printf("%s\n",w);}
return 0;
}


