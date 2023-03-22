#include <stdio.h>

void bubbleSort(int arr[], int n, int swaps)
{

    for (int i = 0; i < n - 1; i++)
    {
        swaps = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
        printf("pass #%d: %d\n", i + 1, swaps);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps, total_swaps;
    printArray(arr, n);
    printf("\n");
    bubbleSort(arr, n, swaps);
    printArray(arr, n);

    return 0;
}
