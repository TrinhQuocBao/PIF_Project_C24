#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint8_t findMax(uint8_t * a, uint8_t n);
uint8_t findMin(uint8_t * a, uint8_t n);

int main(void)
{
    // Prompt user for input
    int n;
    do 
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    }
    while (n <= 5);

    // Allocate memory for array with n elements
    uint8_t * a = malloc(n * sizeof(int));
    printf("Khoi tao mang int arr[%d]", n);
    // Enter values for each element
    printf("\nNhap gia tri tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // print to the console the value of each element
    printf("arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("}\n");
    // print to the console the address of each element
    for (int i = 0; i < n; i++)
    {
        printf("&arr[%d] = %p\n", i, &a[i]);
    }
    // print to the console the max and min value of the array
    printf("Max = %d\n", findMax(a, n));
    printf("Min = %d\n", findMin(a, n));


    free(a);
}

uint8_t findMax(uint8_t * arr, uint8_t n)
{
    uint8_t max_i = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_i)
        {
            max_i = arr[i];
        }
    }
    return max_i;
}
uint8_t findMin(uint8_t * arr, uint8_t n)
{
    uint8_t min_i = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_i)
        {
            min_i = arr[i];
        }
    }
    return min_i;
}
//
