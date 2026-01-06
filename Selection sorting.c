#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_array(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main ()
{
    arr[6]={1,3,10,3,7,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The array before arrangment");
    print_array(arr,size);
    int i=0,j=1,min;
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+a; j<6;j++)
        {
            if(arr[min]>arr[j])
                min=j;
        }
        if(i!=min)
            swap(i,m);
    }


    printf("The array after arrangment");
    print_array(arr,size);


    return 0;
}
