#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, size = 8, newsize;
    int *ptr_to_int = malloc(size * sizeof(int));

    if (ptr_to_int == NULL) return 1;

    for (i = 0; i < size; i++)
        ptr_to_int[i] = i;

    for (i = 0; i < size; i++)
        printf("ptr[%d] = %d\n", i, ptr_to_int[i]);

    printf("Please enter the new size: ");
    scanf("%d", &newsize);

    ptr_to_int = realloc(ptr_to_int, newsize * sizeof(int));
    if (ptr_to_int == NULL) return 1;

    for (i = 0; i < newsize; i++)
        ptr_to_int[i] = i;

    for (i = 0; i < newsize; i++)
        printf("ptr[%d] = %d\n", i, ptr_to_int[i]);

    free(ptr_to_int);
    return 0;
}
