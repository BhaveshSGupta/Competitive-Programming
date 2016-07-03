#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int T,i;
    scanf("%d",&T);
    while(T--){
        char str[100000];
        scanf("%s",str);
        for(i=0;i<strlen(str);i++){
         if(i%2==0){
             printf("%c",str[i]);
         }
        }
        printf(" ");
        for(i=0;i<strlen(str);i++){
         if(i%2!=0){
             printf("%c",str[i]);
         }
        }
        printf("\n");
    }
    return 0;
}
