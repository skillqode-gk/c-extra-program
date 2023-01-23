// Remove the Duplicate Items from a List
#include <stdio.h>
int main()
{

    int arr[20], i, j, k, size;

    printf(" Number of elements in an array: ");
    scanf("%d", &size);

    printf("\nEnter %d elements of an array: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nAfter deletion of the duplicate elements: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}