#include <stdio.h>

int main(void){
	long long int a;
	int T,d,c=0;
	scanf("%d %d",&T,&d);
	while(T--){
	         scanf("%lld",&a);
	         if(a%d==0) c++;
	}
	printf("%d",c);
	return 0;
}

