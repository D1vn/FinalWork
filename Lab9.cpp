#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 1251");

    struct Ball_znach {
        char doZachet[16];
        char posleZachet[16];
    };

    struct Table {
        int nomer;
        char name[64];
        char familya[64];
        struct Ball_znach Ball;
    };

    // Изменено объявление переменных: каждая на новой строке

    int num; // Количество студентов для ввода

    struct Table tablica[8]; // Массив структур для хранения данных студентов (до 8 человек)
    struct Table zamen;      // Временная переменная для обмена местами элементов массива

    printf("Введите кол-во студентов до 7:");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Введите номер студента:");
        scanf("%d", &tablica[i].nomer);
        printf("Имя:");
        scanf("%s", tablica[i].name); // Убран знак &, так как name уже указатель
        printf("Фамилия:");
        scanf("%s", tablica[i].familya); // Убран знак &, так как familya уже указатель
        printf("Балл до зачета:");
        scanf("%s", tablica[i].Ball.doZachet); // Убран знак &
        printf("Балл после зачета:");
        scanf("%s", tablica[i].Ball.posleZachet); // Убран знак &
    }

    printf("Исходный массив:\n");
    printf(" №  Фамилия         Имя               До / После \n");
    for (int i = 0; i < num; i++) {
        printf("%2d  %-14s  %-14s  %6s / %-8s\n", tablica[i].nomer, tablica[i].familya, tablica[i].name, tablica[i].Ball.doZachet, tablica[i].Ball.posleZachet);
    }

    if (num > 1) {
        zamen = tablica[0];
        tablica[0] = tablica[num - 1];
        tablica[num - 1] = zamen;
    }

    printf("Массив после перестановки:\n");
    printf(" №  Фамилия         Имя               До / После \n");
    for (int i = 0; i < num; i++) {
        printf("%2d  %-14s  %-14s  %6s / %-8s\n", tablica[i].nomer, tablica[i].familya, tablica[i].name, tablica[i].Ball.doZachet, tablica[i].Ball.posleZachet);
    }

    return 0;
}

