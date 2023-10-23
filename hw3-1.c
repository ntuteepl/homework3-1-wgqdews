#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a,b=0;
	scanf("%d",&a);
	for(i=2;i<10000;i++){
	if(a%i==0 && a!=i){
		printf("NO");
		i=10000;
		b=1;
	}
}
	if(b==0)
		printf("YES");
	
	
	return 0;
}
