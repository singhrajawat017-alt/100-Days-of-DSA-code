/*Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
*/


#include <stdio.h>

int main()
{
    int n, pos, x;
    int arr[100];

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &x);

    // Input position (1-based)
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Check valid position
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!");
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = x;
    n++;

      // Display updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
