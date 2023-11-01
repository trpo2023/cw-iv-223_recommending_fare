#include "../libtrpo/command.h"
#include "../libtrpo/graphics.h"
#include "../libtrpo/menu.h"
#include "../libtrpo/opr.h"

int main()
{
    int vr;
    system("clear\n");
    printf("_______________________________________________________\n");
    printf("|  ▄███▀▀▀▀▀███▄                                      | \n");
    printf("|  █▀▀▀▀▀▀▀▀▀▀▀█                                      | \n");
    printf("|  █░░█▀▀▀▀▀█░░█                  (Оптимальный)       | \n");
    printf("|  █░░█░░░░░█░░█                     \\(0^0)/          | \n");
    printf("|  █░░█░░░░░█░░█                 (Тарифный план)      | \n");
    printf("|  █░░█░░░░░█░░█                                      | \n");
    printf("|  █░░▀▀▀▀▀▀▀░░█                                      | \n");
    printf("|  █▀▀▀▀▀▀▀▀▀▀▀█                     (1.START)        | \n");
    printf("|  █░░▀░░▀░░▀░░█                                      | \n");
    printf("|  █░░▀░░▀░░▀░░█                      (2.xXx)         | \n");
    printf("|  █░░▀░░▀░░▀░░█                     (3.OLIST)        | \n");
    printf("|  █▄▄▄▄▄▄▄▄▄▄▄█                   (4.DEVELOPERS)     | \n");
    printf("|  ▀███████████▀                      (5.EXIT)        | \n");
    printf("|_____________________________________________________| \n");
    printf("| Пожалуста, выберите нужный пункт меню:              | \n");
    printf("|_____________________________________________________| \n");
    scanf("%d", &vr);

    if (vr == 1) {
        system("clear\n");

        menu1();

        int v = scanf("%d", &v);

        if (v == 2) {
            printf("|_____________________________________________________|\n");
            printf("|Ну и что тогда ты тут делаешь?                       |\n");
            printf("|_____________________________________________________|\n");
            return (0);
        }

        menu2();

        scanf("%d", &v);

        int m = opr2(v);

        menu3();

        scanf("%d", &v);

        int m1 = opr3(v);
        int res = m1 + m;

        if (10 < res || res < 16) {
            meg(res);
        }
        if (20 < res || res < 26) {
            mts(res);
        }
        if (30 < res || res < 36) {
            tel(res);
        }
        if (40 < res || res < 46) {
            bil(res);
        }
    }

    if (vr == 2) {
        Non_main_menu2();
    }
    if (vr == 3) {
        Non_main_menu3();
    }
    if (vr == 4) {
        Non_main_menu4();
    }
    if (vr == 5) {
        return 0;
    }
    return 0;
}
