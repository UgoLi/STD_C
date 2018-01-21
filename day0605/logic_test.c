/*
 *logic test
 * */
#include <stdio.h>
int main()
{
  int  gender=0,
    height=0,
    weight=0;
  printf("please input gender=0/1,0=female,1=male\n");
  scanf("%d",&gender);
  printf("please input height!\n");
  scanf("%d",&height);
  printf("please input height!\n");
  scanf("%d",&weight);
  // !gender&&(height-weight<110)||gender&&height-weight<105
   printf("Is fat?\n%d\n",!gender&&((height-weight)<110)||gender&&((height-weight)<105));
}
