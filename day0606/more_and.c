//more_and.c -- 用and和数组作范围判断和输出
#include<stdio.h>
const char *qualify[4]=      //an array of pointers
{                           //to string
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"   
};
int main()
{
    int age;
    printf("Enter your age in years:");
    scanf("%d",&age);
    int index;
    
    if (age>17&&age<35)
        index=0;
    else if (age>=35&&age<50)
        index=1;
    else if (age>=50&&age<65)
        index=2;
    else 
        index=3;
    printf("********************************************\nYour qualify for the %s",qualify[index]);
    return 0;
}

