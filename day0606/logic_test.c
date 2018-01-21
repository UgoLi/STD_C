/*
 *logic test
 * */
#include <stdio.h>
int main()
{
    int  gender=0,
    height=0,
    weight=0,
    result=0;
    printf("please input gender=0/1,0=female,1=male\n");
    scanf("%d",&gender);
    printf("please input height!\n");
    scanf("%d",&height);
    printf("please input weight!\n");
    scanf("%d",&weight);
    // !gender&&(height-weight<110)||gender&&height-weight<105
    printf("Is fat?\n%d\n",!gender&&((height-weight)<110)||gender&&((height-weight)<105));
    result=!gender&&((height-weight)<110)||gender&&((height-weight)<105);		
    if (1==gender&&1==result)      //OR gender&&result
    {
    printf("超重男人\n");     
    }
    else if(1==gender&&0==result)  //OR gender&&(!result) 
    {
    printf("未超重男人\n");
    }
    else if(0==gender&&1==result)  //OR (!gender)&&result
    {
    printf("超重女人\n");
    }
    else if(0==gender&&0==result)  //OR (!gender)&&(!result)
    {
    printf("未超重女人\n");
    }
}
