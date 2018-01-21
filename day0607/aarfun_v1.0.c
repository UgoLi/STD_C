//函数和数组
#include<stdio.h>
const int ArSize=8;
int sum_arr(int arr[],int n);
int main()
{
    int cookies[8]={1,2,4,8,16,32,64,128};
    int sum=sum_arr(cookies,ArSize);
    printf("总共吃了%d块曲奇。\n",sum);
    return 0;
}
int sum_arr(int arr[],int n)
{
    int total=0;
    for (int i=0;i<n;i++)
    {
        total+=arr[i];
    }
    return total;
}

