/*
 * Студент: Шпаков Максим Денисович
 * Группа: 1-1 Прикладная информатика
 * Назначение: Хранение последовательных чисел в массиве, вычисление суммы и среднее и счет элементов по условию
 */

#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE], n;

    printf("Enter n (1..100): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }

    if (n < 1 || n > MAX_SIZE) {
        printf("Size error\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error\n");
            return 1;
        }

        if (a[i] < -1000 || a[i] > 1000) {
            printf("Value error\n");
            return 1;
        }
    }

    int b[MAX_SIZE];
    int replacements = 0;
    long long sum_b = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            b[i] = 0;
            replacements++;
        } else {
            b[i] = a[i];
        }
        sum_b += b[i];
    }

    printf("Array a:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    printf("Array b:");
    for (int i = 0; i < n; i++) {
        printf(" %d", b[i]);
    }
    printf("\n");

    printf("Replacements = %d\n", replacements);
    printf("Sum b = %lld\n", sum_b);

    return 0;
}