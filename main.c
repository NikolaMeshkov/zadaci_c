
            **************************************************** PREDAVANJE 03 **********************************************************************
//zadaca1 Напиши програм кој како влез зема два цели броја и ги споредува. Потоа го испечатува
//поголемиот број проследен со коментарот e pogolem od и го испечатува и помалиот број. Ако броевите се еднакви, програмот треба да испечати Broevite se ednakvi.
#include <stdio.h>
int broj1;
int broj2;
int main()
{
    printf("vnesi broj 1 \n");
    scanf ("%d",&broj1);
    printf("vnesi broj 2 \n");
    scanf ("%d",&broj2);
    if (broj1>broj2)
        printf ("%d e pogolem od %d",broj1,broj2);
     if (broj2>broj1)
        printf ("%d e pogolem od %d",broj2,broj1);
     if (broj1==broj2)
        printf ("Broevite se ednakvi");
    return (0);

}
// zadaca2 Напиши програм кој вчитува два цели броја и одредува дали се парни или непарни 
#include <stdio.h>
int broj1;
int broj2;
int main()
{

    printf("vnesi broj 1 \n");
    scanf ("%d",&broj1);
    printf("vnesi broj 2 \n");
    scanf ("%d",&broj2);
    if (broj1%2 == 0)
        printf ("%d e paren",broj1);
        else
            printf ("%d e neparen",broj1);
     if (broj2%2 == 0)
        printf ("%d e paren",broj2);
    else
        printf("%d e neparen",broj2);
    return (0);
}
//zadaca 3 Обидете се со спецификаторот за конверзија %d да испечатите букви на следниот начин:
//printf(“%d”, ‘A’) /* karakteri se koristat vo edinecni navodnici */
//Што се случува кога се печатат следните карактери: b  c  0  1  2  $  *  +  / и празно место?
// 
printf(“%d”, ‘A’)  //dava rezultat 65 na b dava 98, na c 99, na 0 48, na 1 49, na 2 50, na $ 36, na prazno mesto 32, na* 42, na + 43 ANSI character set
    
//zadaca 4
    //Во примерот p03_01.c, во наредбата printf наместо спецификаторот за конверзија  %f, поставете го спецификаторот %d. Што се случува и зошто?
   dava rezultat 1073741824 bidejki %d e za integer(cel broj) a rezultatot e decimalen broj (float)
    
//zadaca 5
    //Напиши програма која внесува радиус на круг и испечатува негова плоштина и периметар. За вредност на пи да се земе 3.14.
    
#include <stdio.h>
float r, pi=3.14;
int main()
{
printf ("Vnesi radius na krug");
scanf ("%f",&r);

printf("perimetarot na krug so radius %f e %f\n",r,2*r*pi);
printf("plostinata na krug si radius %f e %f\n",r,r*r*pi);
return (0);
}

//zadaca 6
//Напишете програма која од стандардниот влез зема 5 букви и ги испечатува по следниот редослед: 
//прво петтата, па третата, па втората, па првата, па четвртата буква. 
#include <stdio.h>
char bukva1;
char bukva2;
char bukva3;
char bukva4;
char bukva5;
int main()
{


printf ("Vensi prva bukva\n");
scanf  (" %c", &bukva1);

printf ("Vensi vtora bukva\n");
scanf  (" %c", &bukva2);

printf ("Vensi treta bukva\n");
scanf  (" %c", &bukva3);

printf ("Vensi cetvrta bukva\n");
scanf  (" %c", &bukva4);

printf ("Vensi petta bukva\n");
scanf  (" %c", &bukva5);

 printf ("%c%c%c%c%c",bukva5,bukva3,bukva2,bukva1,bukva4);
return (0);
}

//zadaca7
//Да се модифицира задачата p03_04.c за да дава излез на променливите total  и average со три децимални места
#include <stdio.h>
float data[5];
float total;
float average;
int main()
{
data[0] = 34.0;
data[1] = 27.0;
data[2] = 45.0;
data[3] = 82.0;
data[4] = 22.0;
total = data[0] + data[1] + data[2] + data[3] + data[4];
average = total / 5.0;
printf("Vkupno %.3f Sredna vrednost %.3f\n", total, average);
return (0);
}

//zadaca8
//Напиши 4 начини за да ја зголемиш вредноста на променливата x за 1.
x++;
++x;
x += 1;
x = x+1;

        **************************************************** PREDAVANJE 04 **********************************************************************
//zadaca1 
//Модифицирај го програмот p04_01.c така да ги испуштиш break наредбите. Што се случува? Покажи пример.

#include <stdio.h>

int main()
{
   int mesec;

   printf("Vnesi go mesecot so negoviot reden broj: ");
   scanf("%d", &mesec);

   switch (mesec) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
                printf("Ima 31 den\n");

    case 4:
    case 6:
    case 9:
    case 11:
                printf("Ima 30 dena\n");

    case 2:
                printf("Vo prestapni godini ima 29, a vo obichni 28 dena\n");

    default:
                printf("Greshen broj na mesec!\n");
   }

   return 0;

}

//Vnesi go mesecot so negoviot reden broj: 5
//Ima 31 den
//Ima 30 dena
//Vo prestapni godini ima 29, a vo obichni 28 dena
//Greshen broj na mesec!

//Vnesi go mesecot so negoviot reden broj: 6
//Ima 30 dena
//Vo prestapni godini ima 29, a vo obichni 28 dena
//Greshen broj na mesec!

//Vnesi go mesecot so negoviot reden broj: 2
//Vo prestapni godini ima 29, a vo obichni 28 dena
//Greshen broj na mesec!

// kako output go dava tocniot slucaj i se naredno vo programata

// zadaca2
//.      Модифицирај го програмот p04_02.c така да наместо да е предефинирана вредноста на променливата counter, 
//треба на корисникот да му се овозможи тој да внесе колку ученици има во класот.
#include <stdio.h>


int main()
{
   int counter;
   int grade;
   int total;
   float average; // go smeniv vo float bidejki prosekot moze da e decimalen broj
   int n;


   total = 0;
   counter = 1;

   printf("Vnesi broj na ucenici");
   scanf("%d",&n);
   while ( counter <= n ) {     
      printf( "Vnesi ocena: " ); 
      scanf( "%d", &grade );     
      total = total + grade;     
      counter = counter + 1;     
   } 
  
   average = (float) total / n; 

   printf( "Srednata vrednost na klasot e %.3f\n", average );

   return 0; 

} 
// zadaca3 Ja vidov odkako ja resiv zadaca 2 i vidov deka mi e istata resena

//zadaca4 
//Напиши програма која ја пресметува сумата на броевите од 1 до десет.
#include <stdio.h>


int main()
{
   int n=1,zbir=0;
   while (n <= 10){
    zbir = zbir + n;
   n++;
   }

   printf ("zbirot na broevite od 1 do 10 e %d",zbir);
    return 0;
}

// zadaca5 
//Напиши програма која за внесени десет броја, го пресметува нивниот производ.
#include <stdio.h>


int main()
{
   int n=1;
   float a,p=0;
   while (n <= 10){
        printf ("vnesi broj %d ",n);
        scanf ("%f", &a);
        if (n == 1)
        p = a;
        else
            p = p*a;
        n++;
   }

   printf ("proizvodot na broevite e %f",p);

}

//zadaca6 Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе -1.
#include <stdio.h>

int main()
{
  
   float broj;
   float total;

    total = 0;
   
   printf( "Vnesi broj, -1 za kraj: " );
   scanf( "%f", &broj );


   while ( broj != -1 ) {
      total = total + broj;
      
      printf( "Vnesi broj, -1 za kraj: " );
      scanf("%f", &broj);
   }
      printf( "Zbirot e %f",total );

   return 0;

}
//zadaca7 Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе карактер ‘n’.
#include <stdio.h>

int main()
{
    float n;
    char h = 'd';
    float total = 0;



    while (h == 'd'){

        printf ("vnesi broj: ");
        scanf ("%f", &n);
        total = total +n;

        printf ("Ushte ? (d/n)");
        scanf (" %c", &h);

    }

    printf ("zbirot na broevite e: %f",total);



   return 0;

}

//zadaca 8 Една стоковна куќа продава 5 производи чии цени се дадени во долната табела
//Да се напише програм кој чита серија од парови броеви за:
//а) број на производ
//б) количина продадена во текот на денот

#include <stdio.h>

int main()
{
 int proizvod,n, k=1,x=1;
 float cena, data[5],prodaden_pati[5],vkupno=0;

 while (k <= 5) {
        printf ("vnesi broj na proizvod ");
        scanf("%d",&proizvod);

    switch (proizvod) {
    case 1:
    cena = 50.5;
    break;
    case 2:
    cena = 45.6;
    break;
    case 3:
    cena = 32.8;
    break;
    case 4:
    cena = 65.3;
    break;
    case 5:
    cena = 20.0;
    break;
  }
    printf ("Vensi broj na prodadeni edinici: ");
    scanf ("%d",&n);
    prodaden_pati[proizvod]= n;
    data[proizvod] = cena*n;
    k++;
 }
    while (x <= 5){
        printf("proizvodot so broj %d e prodaden %f pati i vkupnata suma za nego e %f\n",x,prodaden_pati[x],data[x]);
        vkupno = vkupno + data[x];
        x++;
    }
    printf ("Vkupnata prodadena vrednost e %f",vkupno);
}

//zadaca 9 Една голема хемиска компанија ги плаќа своите продавачи делумно и на процент.
//Продавачите земаат плата од 200 евра плус 9% од вкупната нивна продажба за тој месец. 
//На пример, ако некој продавач продал роба вредна 5000 евра, тогаш добива 200 евра плус 9% од 5000, значи вкупно 650 евра.
//Напиши програма која за внесен месечен промет му ја пресметува платата на вработениот. Пример:

#include <stdio.h>

int main()
{

 float promet=0, plata=0;



    while (promet != -1) {
        printf ("Vnesi promet vo evra (-1 za kraj): ");
        scanf ("%f",&promet);
        plata = 200 + (promet * 9)/100;

        printf ("platata e %.2f evra \n",plata);
    }

}

           **************************************************** PREDAVANJE 05 **********************************************************************
           
 //zadaca1   Во програмот p05_02.c смести ја иницијализацијата на променливата sum во заглавието на наредбата for.

#include <stdio.h>


int main()
{
   int sum = 0;
   int number;

   for ( number = 2; number <= 100; sum+=number, number += 2 )


   printf( "Sumata e %d\n", sum );

   return 0;

}

//zadaca2     Програмот p05_03.c преработи го така да колонската репрезентација на вредностите на депозитот за секоја година биде порамнет одлево.

#include <stdio.h>
#include <math.h>


int main()
{
   double amount;
   double principal = 1000.0;
   double rate = .05;
   int year;


   printf( "%s %15s\n", "Vrednost na depozitot", "Godina" );


   for ( year = 1; year <= 10; year++ ) {


      amount = principal * pow( 1.0 + rate, year );


      printf( "%10.2f %25d\n", amount, year );
   }

   return 0;

}

// zadaca3 Да се напише програма која ќе пресметува Питагорини броеви до 100. Тоа се броеви кои го исполнуваат следниот услов a2+b2=c2.
int main()
{
    int a, b, c = 0;
    int m = 2;

    while (c < 1) {
        for (int n = 1; n < m; n++) {

            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > 100)
                break;

            printf("%d %d %d\n", a, b, c);
        }
        m++;
    }
}

//zadaca4 Напиши програма која за внесен цел број кој може да е најмногу  четири цифрен го испечатува неговиот еквивалент во римски броеви.

#include <stdio.h>
#include <math.h>


int main()
{
   int broj;

   printf ("vnesi broj: ");
   scanf("%d",&broj);
   while (broj >= 0){

        if ( broj >= 5000){
        printf("P"); // ne mozev da go iskopiram simbolot za 5000 pa staviv P
        broj -= 5000;
   }
   else if ( broj >= 4000){
        printf("MP");
        broj -= 4000;
   }
   else if ( broj >= 1000){
        printf("M");
        broj -= 1000;
   }
   else if ( broj >= 900){
        printf("CM");
        broj -= 900;
   }
   else if ( broj >= 500){
        printf("D");
        broj -= 500;
   }
   else if ( broj >= 400){
        printf("CD");
        broj -= 400;
   }
   else if ( broj >= 100){
        printf("C");
        broj -= 100;
   }
   else if ( broj >= 90){
        printf("XC");
        broj -= 90;
   }
   else if ( broj >= 50){
        printf("L");
        broj -= 50;
   }
   else if ( broj >= 40){
        printf("XL");
        broj -= 40;
   }
   else if ( broj >= 10){
        printf("X");
        broj -= 10;
   }
   else if ( broj >= 9){
        printf("IX");
        broj -= 9;
   }
   else if ( broj >= 5){
        printf("V");
        broj -= 5;
   }
   else if ( broj >= 4){
        printf("IV");
        broj -= 4;
   }
   else if ( broj >= 1){
        printf("I");
        broj -= 1;
   }
   }
}


// zadaca.      Напиши програм во кој контролата на циклусот на броево од 1 до 100 го прави for наредба. 
//Во рамките на наредбата for треба да се испечати коментар дека бројот не е делив со три.
//Доколку бројот е делив со три, не е печати никаков коментар. Задачата да се реши со користење на наредбата continue. 
//Пример, задачата треба да печати:
//1 ne e deliv so 3
//2 ne e deliv so 3
//4 ne e deliv so 3
//...
//100 ne e deliv so 3


#include <stdio.h>
#include <math.h>


int main()
{
  int n;

  for (n =1;n<=100;n++){
    if (n%3 == 0)
        continue;
    printf ("brojot %d ne e deliv so 3\n",n);
  }
}

           **************************************************** PREDAVANJE 05 **********************************************************************
           
// zadaca 1 1.	
//Напиши програм кој конвертира целобројни фарантхајтови температури од 0-212 степени во децимални 
//цезлиусови температури со 3 цифри прецизност. Да се користи формулата:
//celsius = 5.0 /9.0 * (fahrenheit - 32).
//Излезот да се испечати во две десно порамнети колони од по 10 карактери, а целзиусовите вредности треба да се предводени од знак и 
//за позитивни и за негативни вредности.
#include <stdio.h>

int main()
{
    int far;
   float cel;
    printf("%10s %10s", "Far", "Cel\n");
   for (far = 0 ; far < 212; far++){

   cel = ((float)far-32)*5/9;


   printf ("%10d %+10.3f\n",far,cel);
   }

}

