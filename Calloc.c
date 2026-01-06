#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,size=0;
    char*ptr_to_char=NULL;
    char*ptr_to_char1=NULL;
    size=8;
    ptr_to_char=(char*)malloc(size);


    if(ptr_to_char !=NULL)
{
    //ptr_to_int[0]=10;
    for(i=0 ;i<(2*4);i++)
        ptr_to_char1[i]=i+3;

}
ptr_to_char1=(char*)calloc(2,4);
 for(i=0; i<(2*4);i++)
    printf("ptr[%d]=%d\n",i,ptr_to_char1[i]);





    return 0;
}
