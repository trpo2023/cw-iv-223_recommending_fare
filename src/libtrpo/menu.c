#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

int Non_main_menu2()
{
    printf("|_____________________________________________________| \n");
    printf("|        здесь могла быть ваша реклама                | \n");
    printf("|_____________________________________________________| \n");
    return 0;
}

int Non_main_menu3()
{ // кнопка 3
    system("clear\n");
    system("./tablo");
    return 0;
}

int Non_main_menu4()
{ // кнопка 4
    printf("==============(В разработке учавствовали)=============\n");
    printf("        Студенты первого курса группы ИВ-223          \n");
    printf("======================================================\n");
    printf("Румянцев Александр Иванович\n");

    printf("-Прописал Интерфейс\n");
    printf("-Создал Makefile\n");
    printf("-Делали общими усилиями основной алгоритм\n");
    printf("-Создал общую таблицу тарифов для параметра OLIST\n");
    printf("-Загрузил на Гит\n");
    printf("-Собирал сатистику по тарифам операторов\n");
    printf("======================================================\n");
    return 0;
}
