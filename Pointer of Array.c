#include <stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("array[%d]=%d ,Address: %x\n  ",i,array[i],&array[i]);
    }



    return 0;
}
