#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
//printf("%d\n",T);
while(T--){
  int N;
  scanf("%d",&N);
  int count=0,i = 0;
  for (i=5; N/i>=1; i *= 5)
          count += N/i;
  printf("%d\n",count);
}
return 0;
}
