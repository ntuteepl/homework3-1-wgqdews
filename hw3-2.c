#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i,j,num=3,s[3],d[3],a;
for(i=0;i<3;i++)
  scanf("%d%d",&s[i],&d[i]);
for(i=0;i<3;i++)
  for(j=0;j<3;j++){
    if(s[i]<s[i+1]){
      a=s[i];
      s[i]=s[i+1];
      s[i+1]=a;
      a=d[i];
      d[i]=d[i+1];
      d[i+1]=a;
  }
}
for(i=0;i<2;i++)
  if(d[i]<=s[i+1])
    num--;

printf("%d",num);
return 0;
}
