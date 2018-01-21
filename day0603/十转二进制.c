#include <stdio.h>
int main()
{
    int input_a;
    printf("Please input the value of input_a,within 0~255:");
    scanf("%d",&input_a);
    //remaind user input input_a!
    printf("       %d\r",input_a%2);
    input_a/=2;
    printf("      %d\r",input_a%2);
    input_a/=2;
    printf("     %d\r",input_a%2);
    input_a/=2;
    printf("    %d\r",input_a%2);
    input_a/=2;
    printf("   %d\r",input_a%2);
    input_a/=2;
    printf("  %d\r",input_a%2);
    input_a/=2;
    printf(" %d\r",input_a%2);
    input_a/=2;
    printf("%d\n",input_a%2);
    input_a/=2;
    //end
    return 0;
    //decimalism to binary system!
}

    

