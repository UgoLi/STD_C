/*
 *隐士类型转换
 * */
#include <stdio.h>
int main()
{
   printf("sizeof(0==1?1:0.9)长度%d\n", sizeof(0==1?1:0.9)) ;
   printf("-7+4<0 is%d\n ",-7+4<0);
   printf("-7+4u<0is %d\n",-7+4u<0);
   printf("%d %d\n",300,(char)300);
   printf("%u\n",-7);
    return 0;
}

