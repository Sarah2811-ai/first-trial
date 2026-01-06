#include <stdio.h>
int main(){
    //little and big endian that diffeare from architecture to another
    int z=0x12345678;
    char *ptr=(char*)&z;
    if(*ptr==0x78)
    {
        printf("Little endian");
    }
    else
    {
        printf("Big endian");
    }
//My laptop is little endian
int x=10,y=20;
const int *ptr=&x;//can not change x value and can connect to y the const int is to the x
int const *ptr=&x;//const int is the same as int const
int *const ptr=&x;//constant pointer point at normal x can change the value of x put only point at x
const int *const ptr=&x;//cant change where the pointer points and can not change the value of x
int **ptr2=&ptr;//pointer to poionter
int ***ptr3=&ptr2;

return 0;}
