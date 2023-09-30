
#include"../libtrpo/opr.h"
#include"../libtrpo/menu.h"
#include"../libtrpo/command.h"


int main(){
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

if(vr == 1){
 system("clear\n");
 
 int v =opr1();

if(v==2){
 printf("|_____________________________________________________|\n");
 printf("|Ну и что тогда ты тут делаешь?                       |\n");
 printf("|_____________________________________________________|\n");
return (0);}
int m=0;
  m= opr2(m);
int m1 = opr3(m);

if(10<m1 || m1<16){void meg(int m1);}
if(20<m1 || m1<26){void mts(int m1);}
if(30<m1 || m1<36){void tel(int m1);}
if(40<m1 || m1<46){void bil(int m1);}
}

 if (vr==2){
  Non_main_menu2();
 }
if (vr==3){
  Non_main_menu3();
 }
if (vr==4){
  Non_main_menu4();
 }
if (vr==5){
  return 0;
 }
return 0;}
