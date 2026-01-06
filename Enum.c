#include <stdio.h>

enum days
{
    sat,
    sun,
    mon,
    tues,
    wedn,
    thurs,
    frid
};
int main(){
int c;
printf("Enter your day [0=sat/6=frid]\n");
scanf("%d",&c);
switch(c)
{
    case sat:printf("10");break;
    case sun:printf("10");break;
    case mon:printf("10");break;
    case tues:printf("10");break;
    case wedn:printf("10");break;
    case thurs:printf("10");break;
    case frid:printf("10");break;
}




return 0;}
