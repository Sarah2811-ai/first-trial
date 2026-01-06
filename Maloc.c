#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,size=0;
    int*ptr_to_int=NULL;
    printf("ptr_to_int before =%x\n",ptr_to_int);
    size =4;
    ptr_to_int=(int*)malloc(size);
printf("ptr_to_int after =%x\n",ptr_to_int);
if(ptr_to_int !=NULL)
{
    //ptr_to_int[0]=10;
    for(i=0 ;i<(size/sizeof(int));i++)
        ptr_to_int[i]=i+22;

}
 for(i=0; i<(size/sizeof(int));i++)
    printf("ptr[%d]=%d\n",i,ptr_to_int[i]);





    return 0;
}
