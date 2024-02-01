#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Prompt user for input
    int n;
    do 
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 16);

    // Allocate memory for array with n elements
    uint64_t * a = malloc(n * sizeof(int));
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
    
    free(a);

    return 0;
}
//
