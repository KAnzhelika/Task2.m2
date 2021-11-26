#include <stdio.h>

int main()
{
    int A[10];
    int size;
 
    printf("Size of array : ");
    scanf("%d", &size);
 
    int i;
    
    for (i = 0; i < size; i++)
	{
        printf("A[%i] : ", i + 1);
        scanf("%d", &A[i]);
    }
 
    int min = 0;
    int max = 0;
 
    for (i = size - 1; i >= 0; i--)
	{
        if (A[i] > A[max])
		{
			max = i;
		}
        if (A[i] < A[min]) 
        {
			min = i;
		}
    }
 
    if (max != min) 
	{
        A[max] += A [min];
        A[min] = A[max] - A[min];
        A[max] = A[max] - A[min];
    }
 
    printf("A: \n");
    for (i = 0; i < size; i++)
	{
		printf("%d : %d\n", i + 1, A[i]);	
	}
 
    return 0;
}
