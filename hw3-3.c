#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,s1,s2;
	scanf("%d%d",&n1,&n2);
	s1=n1/1000+n1%1000/100+n1%100/10+n1%10;
	s2=n2/1000+n2%1000/100+n2%100/10+n2%10;
	if(s1>s2)
		printf("%d",n2);
	else if(s1<s2)
		printf("%d",n1);
	else if(s1==s2){
		if(n1>n2)
			printf("%d",n2);
		if(n1<n2)
			printf("%d",n1);
}
}
