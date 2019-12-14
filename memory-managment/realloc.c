#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i, n1, n2;

    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");

    for (i = 0; i < n1; ++i)
    {
        printf("%p\n", ptr + i);
    }

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    ptr = realloc(ptr, n2 * sizeof(int));
    printf("Addresses of newly allocated memory: ");
    for (i = 0; i < n2; ++i)
    {
        printf("%p\n", ptr + i);
    }

    free(ptr);
    return 0;
}