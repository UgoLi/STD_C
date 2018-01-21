//ifelseif.c -- using if else if else
#include<stdio.h>
const int Fave=27;
int main()
//const int Fave=27;
{
    int n;
    printf("Enter a number in the range 1-100 to find my favorite number!\n");
    while (n!=Fave)
    {
        scanf("%d",&n);
        if (n<Fave&&n>=0)
        {
            printf("Too low--guess again!\n");
        }
        else if (n>Fave)
        {
            printf("Too high--guess again!\n");
        } 
        else if(n<0)
        {
            printf("*********************************\n");
            printf("输入为负数，程序结束！！\n");
        }
        else 
        {
            printf("*********************************\n");
            printf("%d is right!\n",n);
        }
    }
    return 0;
}

