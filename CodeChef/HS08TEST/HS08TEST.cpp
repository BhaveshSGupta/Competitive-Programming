#include<stdio.h>
int main()
{
        float withdraw,bal;
        scanf("%f %f",&withdraw,&bal);
        if( (bal<withdraw+0.5) || ((int)withdraw%5!=0))
        {
            printf("%.2f",bal);
        }
        else
            printf("%.2f",bal-withdraw-0.50);
        return 0;
}
