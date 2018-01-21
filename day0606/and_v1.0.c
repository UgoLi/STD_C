//and.c--using the AND operator
#include<stdio.h>
const int ArSize=6;
//enum {red,orange,yellow,green,blue,violet,indigo};
int main()
{
    int naaq[ArSize];  //定义一维6元素数组
    printf("Enter the NAAQs (New Age Awareness Qutotients)of\nyour neighbors.Program terminates when you make\n%d entries or enter a negative value.\n",ArSize);
    int i=0;
    int temp;
    printf("First value:\n");
    scanf("%d",&temp);
    while (i<ArSize && temp>=0) //2 quitting criteria
    {
       // printf("naaq[%d]=%d\n",i,naaq[i]);
        naaq[i]=temp;
       // printf("naaq[%d]=%d\n",i,naaq[i]);
        i++;
       // continue;
        if (i<ArSize)   //room left in array
        {
            printf("Next Value:\n");
            scanf("%d",&temp);  //so get next value
        }

    }
    if (i==0)
    {
        printf("No data--Bye!\n");

    }
    else 
    {
        printf("************************************\n");
        printf("Enter your NAAQ:\n");
        int you;
        scanf("%d",&you);
        int count =0;
        for (int j=0;j<i;j++)
        {
            if (naaq[j]>you)
                ++count;
        }
        printf("%d ",count);
        printf(" of your neighbors have greater anwareness of \nthe New Age than you do.\n");
        printf("*************************************\n");
    }
}   


















