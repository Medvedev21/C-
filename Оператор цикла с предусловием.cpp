#pragma warning(disable : 4996) // это строка отключает ошибку scanf
#include <iostream>
#include <stdio.h>
int main(void)
{
    int n;
    printf("N:");
    scanf("%i", &n);
    int k !=0;
    while ((k < n - 1) & ((n % k) != 0)) {
        ++k;
    }
    printf("%s\n", ((n % k) != 0) ? "True" : "False");
}


