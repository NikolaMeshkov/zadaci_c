
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

           **************************************************** PREDAVANJE 06 **********************************************************************
           
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

//zadaca 2 2.	Напиши програма која вчитува датуми во облик gg/mm/dd, gg-mm-dd и gg+mm+dd и 
//ги испечаува така да наместо бројот на месецот се испечати имато на месецот

#include<stdio.h> // include stdio.h library

int main(void)
{

    int day, mon, year;

    char *months[] = { "Januari", "Fevruari", "Mart", "April","Maj", "Juni", "Juli", "Avgust","Septemvri", "Octomvri", "Noemvri", "Dekemvri"};

    printf("Vnesi data (gggg/mm/dd): ");
    scanf("%d/%d/%d", &year, &mon, &day );



    printf(" Vneseniot datum e: %d %s %d", day, months[mon - 1], year);

    return 0;
}

           **************************************************** PREDAVANJE 07 **********************************************************************

//zadaca1 Напиши програма која внесува 10 цели броеви и и ги доделува на функцијата paren која враќа 1 ако бројот е парен и 0 ако бројот не е парен

#include<stdio.h>

int paren(int y){

    if (y %2 == 0)
        y = 1;
        else
            y=0;
    return y;
}

int main()
{
    int i=0,x;

    for (i=0;i<10;i++){
        printf ("vnesi broj %d: ",i);
        scanf ("%d",&x);
        printf ("%d \n",paren(x));

    }


}

// zadaca2 Напиши програма која на функцијата vreme и доделува три целобројни аргументи, час, минута и секунда и 
//како резултат го враќа бројот на секунди до 12 часот. Имено, ако е 11 часот 59 минути и 58 секунди, тогаш има уште 2 секунди до 12 часот

#include<stdio.h>

int vreme(int c, int m, int s){
           
    int total;
    total = (11-c)*3600 + (59-m)*60 + 60-s;
    return total;

}
int main() {

    int c,m,s;
    printf ("vensi vreme vo format hh:mm:ss : ");
    scanf ("%d%*c%d%*c%d", &c , &m, &s);

    printf("Do 12 casot ima uste %d sekundi",vreme(c,m,s));

}

//zadaca 3 Напиши програма која на функцијата obratno и доделува цел број. 
//Оваа функција го враќа бројот напишан со обратни цифри, т.е. ако сме ја повикале функцијата со параметарот 1243, треба да врати 3421.

#include<stdio.h>

int obratno(int x){
    int ostatok,y;
    while ( x != 0){
        ostatok = x%10;
        y = y * 10 + ostatok;
        x = x/10;
    }
     return y;
}
int main()
{
    int x;

    printf ("Vnesi cel broj: ");
    scanf ("%d",&x);

    printf ("obratniot broj e %d ",obratno(x));
  }

//zadaca4 Напиши програма во која дефинираш функција nzd за пресметување на најголемиот заеднички делител на два броја.

#include<stdio.h>

int nzd(int b1, int b2){
    int nzd,i;
    for ( i = 1; i<=b1 && i<=b2; i++ ){
        if ( b1%i == 0 && b2%i==0 )
            nzd = i;
    }
     return nzd;
}
int main()
{
    int x,y;

    printf ("Vnesi cel broj: ");
    scanf ("%d",&x);
    printf ("Vnesi cel broj: ");
    scanf ("%d",&y);

    printf ("nzd e %d ",nzd(x,y));

   }

//zadaca5  Напиши итеративна верзија на функцијата за фибоначиеви броеви


#include <stdio.h>
int main() {

    int broj, i;
    long zbir=0,          
           
    printf("vensi broj: ");
    scanf ("%d",&broj);


    for (i=0;i<broj;i++){

    if (broj == 0)
        zbir=0;
    else if (broj == 1)
        zbir=1;
    else{
        zbir = x+y;
        x=y;
        y=zbir;

    }

}
    printf ("Fibonaci(%d) e: %ld",broj,x);
}

//zadaca6 Напиши 
зивна верзија на функцијата за пресметување најголем заеднички делител
 #include <stdio.h>

int nzd (int b1, int b2);

int main () {

    int b1,b2,n;

    printf ("vnesi cel broj: ");
    scanf ("%d",&b1);

    printf ("vnesi cel broj: ");
    scanf ("%d",&b2);
    n = nzd(b1,b2);

    printf("nzd na dvata broja e: %d",n);
}

int nzd (int b1, int b2)
{

    if (b2 == 0 )
        return b1;
    else {
        nzd (b2 , b1%b2);
    }
}

//zadaca 7 Напиши рекурзивна верзија на програма која за внесено n повикува функција dzvezdi со параметар 
//n која во зависност од n испечатува ѕвезди на следниот начин:
//         Se dobiva:
//         * * * * *
//         * * * *
//         * * *
//         * *
//         *

#include<stdio.h>
void dzvezdi(int n);
int main(){
    int n;
    printf("vnesi broj: ");
    scanf ("%d",&n);
    while ( n != 0 ){
        dzvezdi(n);
        n--;
        printf ("\n");
    }
}

void dzvezdi(int n)
{
    if (n < 1)
        return ;
    printf ("* ");
    dzvezdi(n-1);

}

           **************************************************** PREDAVANJE 08 **********************************************************************

//zadaca 1 Напиши програм кој вчитува вредности за температури за секој ден од месецот и наоѓа средна месечна температура.
//         Да се земе предвид дека различни месеци имаат различен број на денови


#include<stdio.h>

int main () {
    int n,niza[31]={0},i;
    float prosek,den,total=0;
    char c;


    printf ("vnesi broj na mesec(1-12): ");
    scanf ("%d",&n);

     switch (n) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
                den = 31;
                break;

    case 4:
    case 6:
    case 9:
    case 11:
                den = 30;
                break;
    case 2:
               {
                    while (c != 'd' && c!= 'n'){
                   printf ("dali e prestapna godinata? (d/n)");
                   scanf (" %c",&c);

                   if (c == 'd')
                   den = 29;
                   else if (c == 'n')
                    den = 28;
                   else
                    printf("Obidete se povtorno \n");

                   }
               }
               break;

    default:
                printf("Greshen broj na mesec!\n");
     }
    for (i=1;i<=den;i++){
        printf ("Vnesi temperatura za den %d ",i);
        scanf ("%d",&niza[i]);
        total = total + niza[i];
    }
    prosek = total/den;
    printf ("prosekot za mesec %d e; %.2f ",n,prosek);
}

//zadaca2 .      Прости броеви се броеви кои се деливи само со себе си и со бројот 1. Напиши програм кој внесува n елементи во низа. 
//         Да се овозможи функционалност да имаме променлив број на елементи во низата. Во почетокот сите елементи да се иницијализираат на 1. 
//         Потоа да се напише функција prosti која секој елемент од низата чиј индекс e прост број, 
//         го поставува на 0. На крај од така добиената низа да се најде начин да се испечатат простите броеви до n.

#include <stdio.h>
#define SIZE 100
int prosti(int n);

int main () {
int a[SIZE], n,i;
scanf ("%d",&n);
    for (i=1;i<=n; i++)
    {
      a[i] = 1;
    }
    for (i=1;i<=n;i++)
    {
        if(prosti(i) == 0)
        a[i] = 0;
        printf ("%d ",a[i]);
    }
     printf ("\n");
     printf ("Prosti broevi do veneseniot broj se: ");
     for (i=1;i<=n;i++)
    {
        if (a[i]==0)
            printf (" %d ",i);
   }
}
int prosti (int n) {
    int i,pr=0;
    if (n == 0 || n == 1)
       pr = 0;
    for (i=2; i<= n/2 ;i++ ){
        if (n%i == 0)
        {
            pr = 1;
            break;
        }
    }
        return pr;
}
//zadaca 3 Палиндроми се низи од букви што се читаат исто и оддесно на лево и одлево на десно. На пример зборот “radar” е палиндром.
//Да се напише програм во кој внесуваме низа од карактери. 
//Треба да имаме функција palindrom која враќа вредност 1 ако стрингот е палиндром или 0 инаку.

#include<stdio.h>
#include<string.h>
#define SIZE 100
void palindrom (char str[SIZE])
{

    int l = 0;
    int h = strlen(str) - 1;


    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf(" 0 ", str);
            return;
        }
    }
    printf(" 1 ", str);
}

int main()
{
    char niz[SIZE];

    printf ("Vnesi zbor ");
    scanf ("%s",niz);
    palindrom(niz);

}


// zadaca4 Да се напише програма која во главната функција внесува број на редици и колони на дводимензионална матрица. 
//Во функцијата vnesiMatrica внесува елементи, а преку функцијата pechatiMatrica ги печати елементите во табеларна форма.
//а) Да се напишат итеративни верзии на двете функции.


#include<stdio.h>
#include<string.h>
#define SIZE 100
int vnesiMatrica (int n,int m){
    int i,j,arr[SIZE][SIZE];
    for (i=1;i<=n;i++){
        for (j=1;j<=m;j++){
        printf ("Vnsi element na pozicija [%d][%d]: ",i,j);
        scanf ("%d",&arr[i][j]);
        }
    }
}
void pechatiMatrica(int n, int m)
{
   int i,j,arr[SIZE][SIZE];

   for ( i = 1; i <= n; i++ ) {
      for ( j = 1; j <= m; j++ ) {
         printf( "%d ", arr[ i ][ j ] );
      }
      printf( "\n" );
   }
}

int main()
{
    int n,m,mat[SIZE][SIZE];

    printf ("Vnsi broj na redici: ");
    scanf ("%d",&n);

    printf ("Vnsi broj na koloni: ");
    scanf ("%d",&m);

    vnesiMatrica(n,m);
    pechatiMatrica (n,m);

}


//zadaca5 Да се напише програма која симулира селекциско сортирање. 
//Селекциското сортирање го бара најмалиот елемент во низата и го заменува со првиот елемент. 
//Сега, на прво место сигурно ни се наоѓа најмалиот елемент во низата.
//Потоа, во остатокот од низата, од вториот до n-тиот елемент, повторно го бараме новиот најмал елемент и му ја заменуваме вредноста со вториот елемент од низата итн.
//Ова сортирање има слични процесирачки капацитети како сортирање со методот на меурче.


#include <stdio.h>
#define SIZE 100

int selekcija (int a[SIZE],int n){
    int i,j,temp;
    for (i = 0; i < n; i++){
        for (j=0; j < n; j++){
            if (a[j]>a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf ("sortirana niza: ");
     for (i = 0; i < n; i++){
        printf ("%d ",a[i]);

     }
}
int main(){

    int n,i,a[SIZE],temp,j;

    printf ("Vnesi broj na elementi vo nizata: ");
    scanf ("%d",&n);

     for (i = 0; i < n; i++){
        printf ("Vnesi element: ");
        scanf ("%d",&a[i]);
     }

     selekcija (a,n);

}















