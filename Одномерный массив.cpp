#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[10];
    int n;

    printf("N: ");
    scanf("%i", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    int i2, k = 0, k2 = 1;
    for (i = 0; i < n - 1; ++i) {
        for (i2 = i + 1; i2 < n; ++i2) {
            if (abs(a[i] - a[i2]) < abs(a[k] - a[k2])) {
                k = i;
                k2 = i2;
            }
        }
    }
    printf("%i %i\n", k + 1, k2 + 1);
}