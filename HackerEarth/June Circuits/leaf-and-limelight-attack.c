//https://ideone.com/Jkqs2k
//
//https://ideone.com/QEtTON
//
//https://ideone.com/SSTJlg
/*#include<stdio.h>
int main() {
  int T, testLoop;
  long int mod = 1000000009;
  long int n;
  long long int m, c1, c2, r1, r2;
  long int sum = 0;
  long long int i;

  scanf("%d", &T);
  while(T--) {
    scanf("%lld", &n);
    m = n * n;
    printf("%lld",m);
    c1 = 0;
    c2 = n - 1;
    r1 = 0;
    r2 = n - 1;
    sum = 0;

    while (m >= 1) {
      for (i = c1; i <= c2; i++) {
        if(r1 == i || i == (n-r1-1)){
          sum = (sum + m) % mod;
        }
        //a[r1][i]
        m--;
      }

      for (i = r1 + 1; i <= r2; i++) {
        if(i == c2 || c2 == (n-i-1)){
          sum = (sum + m) % mod;
        }
        //a[i][c2]
        m--;
      }

      for (i = c2 - 1; i >= c1; i--) {
        if(r2 == i || i == (n-r2-1)){
          sum = (sum + m) % mod;
        }
        //a[r2][i]
        m--;
      }

      for (i = r2 - 1; i >= r1 + 1; i--) {
        if(i == c1 || c1 == (n-i-1)){
          sum = (sum + m) % mod;
        }
        //a[i][c1]
        m--;
      }

      c1++;
      c2--;
      r1++;
      r2--;
    }
    printf("%ld\n", sum);
  }
  return 0;
}
*/

#include <stdio.h>
int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
		long long int M,N,SUM;
		scanf("%lld",&N);
		M=N*N;
		SUM=M%1000000009;
		//printf("%lld\n",M);
		while(M>1){
			M=M-(N-1);
			//printf("%lld ",M);
			SUM=SUM+M%1000000009;
			M=M-(N-1);
			//printf("%lld ",M);
			SUM=SUM+M%1000000009;
			M=M-(N-1);
			//printf("%lld ",M);
			SUM=SUM+M%1000000009;
			M=M-(N-1);
			//printf("%lld ",M);
			SUM=SUM+M%1000000009;
			N=N-2;
		}
		printf("\n%lld",SUM%1000000009);
	}
	return 0;
}
