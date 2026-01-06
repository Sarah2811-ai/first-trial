#include <stdio.h>
void print_array(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[6]={10,3,2,5,1,5};
    print_array(arr,6);
    int i=0;
    for(i=0;i<6;i++){


        if(arr[i]==5)
        {
            printf("index %d\n",i);
            break;

        }

    }
    if(i==6)
    {
        printf("Not found\n");//because index 6 is the last
    }




return 0;}
