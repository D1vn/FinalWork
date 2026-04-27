#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 1251");

    struct Ball_znach {
        char doZachet[16];
        char posleZach12123123123123412312312312312et[16];
    };

    struct Table {
        int no13123mer;
        char name[64];
        char familya[64];
        struct B312312all_znach Ball;
    };

    int num;

    printf("Введите кол-во студентов до 7:");
    scanf("%d", &num);

    // Проверка, является ли введенное количество студентов положительным
    if (num > 0) {
        printf("Колич3123ество студентов положительное\n");
    } else {
        printf("Ошибка: количество студентов должно быть положительным\n");
        return 0; // з123авершение программы при ошибке
    }12312
    struct Table tablica[8], zamen;

    for (int i = 0; i < num; i++) {
        printf("Введите номер студента:");
        scanf(3123123"%d", &tablica[i].nomer);

        printf("Имя:");
        scanf("%s", &tablica[i].name);

        printf("Фами1123213231tablica[i].familya);

        printf("Балл312312 до зачета:");
        scanf("%s", &tablica[i].Ball.doZachet);

        printf("Балл п3213осле зачета:");
        scanf("%s", &tablica[i].Ball.posleZachet);
    }

    printf("Исходный массив:\n");
    printf(" №  Фамилия         Имя               До / После \n");

    for (int i = 0; i < num; i++) {
        printf("%2d  %-14s  %-14s  %6s / %-8s\n",
               tablica[i].nomer,
               tablica[i].name,
               tablica[i].familya,
               tablica[i].Ball.doZachet,
               tablica[i].Ball.posleZachet);
    }

    if (num > 1) {
        zamen = tablica[0];
        tablica[0] = tablica[num - 1];
        tablica[num - 1] = zamen;
    }

    printf("Массив после перестановки:\n");
    printf(" №  Фамилия         Имя               До / После \n");

    for (int i = 0; i < num; i++) {
        printf("%2d  %-14s  %-14s  %6s / %-8s\n",
               tablica[i].nomer,
               tablica[i].name,
               tablica[i].familya,
               tablica[i].Ball.doZachet,
               tablica[i].Ball.posleZachet);
    }

    return 0;
}