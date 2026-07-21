#include <stdio.h>

void cube(int *ptr, int size)
{
    int i, j;

    printf("\nCube of all elements:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d ", (*ptr) * (*ptr) * (*ptr));
            ptr++;
        }
        printf("\n");
    }
}

int main()
{
    int size, i, j;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size];

    printf("Enter array elements:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cube(&a[0][0], size);

    return 0;
}


