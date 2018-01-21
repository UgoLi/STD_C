//Not_V1.0 --using the Not operator
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//int is_int(int);
int main()
{   
    unsigned int num;

    printf("Yo,dude!Enter an integer value:");
    scanf("%u",&num);

    while (!is_int(num))
    {
        printf("%d\n",is_int(num));
        printf("Out of range--please try again:");
        scanf("%d",&num);
    }
    int val=(int)num;
    printf("You've entered the integer %d\nBye!\n",val);
    return 0;
}
//构造函数 返回int型
int is_int(int x)
{
    if (x<=2147483648&&x>=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
   
}

