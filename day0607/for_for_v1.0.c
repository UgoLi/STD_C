//货币1、2、5   表示10元的可能
#include <stdio.h>
int main()
{
    //三种货币的数量
    int a=0,b=0,c=0;
    for(c=0;c<=2;c++)
    {
        for(b=0;b<=5;b++)
        {
            for(a=0;a<=10;a++)
            {
                if(10==c*5+b*2+a*1)
                    printf("1元%d个，2元%d个，5元%d个\n",a,b,c);
            }
        }
    }


}
