#include <stdio.h>

int main(void){
	long long int a;
	int i,d,c=0;
	scanf("%d %d",&i,&d);
	while(i--){
	         scanf("%lld",&a);
	         if(a%d==0) c++;
	}
	printf("%d",c);
	return 0;
}

