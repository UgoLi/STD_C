#include<stdio.h>
int main()
{
    int i=100,n=41883;
    printf("%d\n",i--+n);
    i=100;
    printf("%d\n",n+i--);
    i=100;
    printf("%d\n",--i+n);
    i=100;
    printf("%d\n",n+--i);
    int a,b,c,d,e,f,g;
    a<<=n;b>>=n;c=c|n;d=d&n;e^=n;
    printf("%d\n %d\n %d\n %d\n %d\n",a,b,c,d,e);
    return 0;
}
