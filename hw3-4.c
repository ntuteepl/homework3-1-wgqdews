#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a[100],b[4],ans[4],x=0,A=0,B=0,i,j,k;
for(i=0;i<100;i++){
scanf("%d",&a[i]);
x++;
if(a[i]==0)
i=100;
}
for(j=0;j<4;j++){
ans[j]=a[0]%10;
a[0]=a[0]/10;
}
for(i=1;i<x-1;i++){
A=0;
B=0;
for(j=0;j<4;j++){
b[j]=a[i]%10;
a[i]=a[i]/10;
}
for(j=0;j<4;j++){
for(k=0;k<4;k++){
if(b[j]==ans[k]){
if(j==k)
A++;
else
B++;
}
}
}
printf("%d%c%d%c\n",A,'A',B,'B');



}
return 0;
}
