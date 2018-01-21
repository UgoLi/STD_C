/*
 *
 */
#include<stdio.h>
struct inflatable  //struct declaration
{
    char name[20];
    float volume;
    double price;
};
struct inflatable guest,pal;
int main(){
    struct inflatable guest={"篮球",5,50};
    struct inflatable pal={"足球",4,12};
    printf("需要购买的物品是 %s 和 %s\n",guest.name,pal.name);
    printf("需要支付￥%f\n",guest.price+pal.price);
    return 0;
}
