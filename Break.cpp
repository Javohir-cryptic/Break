#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main()
{
    int A, B;
    setlocale(LC_ALL, "Rus");
    while (1) 

    {
        printf("\nВведите делимое и делитель:");
        scanf("%d%d", &A, &B);

        if (A == 0 && B == 0) break; 
        if (B == 0) {

            printf("Деление на ноль");
            continue; 
        }

        printf("Частное %d, остаток %d", A / B, A % B);

    }
    getchar();
}