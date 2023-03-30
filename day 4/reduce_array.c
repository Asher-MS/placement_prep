#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, n;
    printf("Enter the size of the array");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int *));
    printf("Enter the Element");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", arr + i);
    }
    int element_to_be_deleted = arr[n - 1];
    arr = realloc(arr, (n - 1) * sizeof(int *));

    for (int i = 0; i < n - 1; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe Deleted Element is %d", element_to_be_deleted);
}