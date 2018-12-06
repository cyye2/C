#include<stdio.h>
int main(void)
{
    int a;
    int b,c,d;
    for(a=100;a<=999;a++)
    {
        b=a/100;
        c=(a%100)/10;
        d=a%10;
        if(b*b*b+c*c*c+d*d*d==a)
        {
            printf("%d\n",a);
        }
    }
}
