
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

           **************************************************** PREDAVANJE 10_2 **********************************************************************
           
                      
// proekt 2 Да се модифицира програмот за делење карти така да по мешањето подели 5 карти од рака за покер. Да се одреди дали раката содржи:
//а) пар.
//б) два пара
//в) трилинг (пр. три десетки)
//г) четири карти од ист број (пр. четири асови)
//д) боја (сите пет карти да се од иста боја, на пр, детелина)
//ѓ) кента (5 подредени карти од иста боја, пр. 3,4,5,6,7 срце)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mesaj(int wDeck[][13] );
void deli (int wDeck[][13], const char *wFace[], const char * wZnak[]);
void raka (int wDeck[][13]);
int main() {

    const char* boja[4] = {"List","detelina","Baklava","srce"};
    const char* brojka[13] ={ "As", "Dva", "Tri", "Chetiri", "Pet", "Shest", "Sedum", "Osum","Devet", "Deset", "Dzandar", "Dama", "Pop" };

    int spil[4][13]={0};

    srand(time(0));
    mesaj(spil);
    deli(spil,brojka,boja);
    raka(spil);
    return 0;
}

void mesaj(int wDeck[][13]){
    int row,column,karta;

    for (karta = 1; karta <=52;karta ++){
        do{
            row = rand()%4;
            column = rand()%13;

        } while (wDeck[row][column]!=0);
        wDeck [row][column] = karta;
    }


}

void deli (int wDeck[][13], const char * wFace[], const char * wZnak[]){
    int card;
    int row;
    int column;



    for (card = 1; card <=5 ; card++){
    for (row = 0; row <= 3; row++){
        for (column = 0; column <= 12; column++){
            if (wDeck [row][column] == card){
                printf ("%8s %-8s%c",wFace[ column ],wZnak[ row ], card % 2 == 0 ? '\n' : '\t');

        }
    }

}

}
}
void raka (int wDeck[][13]){

    int boja[6];
    int broj[6];
    int card;
    int row;
    int column;
    int temp;
    int i,j;
    int isti=1;
    int sk = 1;
    int tri = 0;

    for (card = 1; card <=5 ; card++){
    for (row = 0; row <= 3; row++){
        for (column = 0; column <= 12; column++){
            if (wDeck [row][column] == card){
                    boja[card] = row;
                    broj[card] = column;
                }
            }
        }
    }

    for (i = 1; i <= 5; i++){
        for (j=1; j <=5  ; j++){
        if (boja[j] > boja[i]){
                temp = boja[i];
                boja[i] = boja[j];
                boja[j] = temp;
            }
            if (broj[j] > broj[i]){
                temp = broj[i];
                broj[i] = broj[j];
                broj[j] = temp;
            }
    }

}

         for (i = 1; i <= 5; i++){
             if (boja[i] == boja[i+1])
             isti++;
             if (broj[i] == broj[i+1]-1)
                sk++;
            }
            for (i = 1; i <= 5; i++){
                for (j = 1; j <= 5; j++){
                    if (broj[j]==broj[i] && i !=j )
                        tri++;
                }
            }

        printf ("\n");
         if (isti == 5)
            printf ("Vo rakata ima boja");
         if (sk == 5 )
            printf ("Vo rakata ima kenta");
        if (tri == 2)
            printf ("Vo rakata ima par");
        if (tri == 4)
            printf ("Vo rakata ima dva para");
        if (tri == 6)
            printf ("Vo rakata ima triisti");
        if (tri == 12)
            printf ("Vo rakata ima cetiri isti");
}

           **************************************************** PREDAVANJE 10_3 **********************************************************************

//Проект 3. Да се изработи до понеделник 29.01.2007
//Да се направи програма во која ќе се сместат оцени на студенти по предмети (дводимензионална низа во која во редици се студентите, а во колони се нивните оцени по 5 предмети). 
//Програмата треба да го нуди следниот кориснички посредник:
 
//Vnesi izbor:
//0 Ispechati ja nizata so oceni
//1 Najdi ja maksimalnataocena
//2 Najdi ja minimalnata ocena
//3 Ispecati ja prosechnata ocena za sekoja student
//4 Kraj
 
//Програмата да се реши со користење на покажувачи до функциите max, min, pecatiNiza, рrosek.
//Покажувачите кон четирите функции да се сместат во низата obrabotiOceni, а како индекс за повикување на секоја од функкциите да се користи изборот од
//корисничкото мени.
 
//Забелешка: Една рестрикција при користење на покажувачи кон функции е што сите функции мора да се од ист тип.
//Покажувачите мора да се со иста повратна вредност и да примаат аргументи од ист тип. 
//Наједноставно би било кога ниту една од функциите нема да враќа вредност, но ќе печати вредности, а како аргумент би се предавале оцени за еден студент.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

void pecatiNiza (int a[][7], int n);
void max (int a[][7],int n);
void min (int a[][7],int n);
void prosek (int a[][7],int n);
int main () {
        int n, izbor;
        int a[SIZE][7];
        int i,j;
        printf ("Vnesi broj na studenti: ");
        scanf ("%d",&n);

        for (i = 2;i <= n+1; i++){
            for (j = 2;j <= 6 ;j++){
                printf ("Vnesi ocena %d za student %d: ",j-1,i-1);
                scanf ("%d",&a[i][j]);

            }
        }

       void (*obrabotiOceni[4])(int a[][7] , int n ) = {pecatiNiza,max,min,prosek};

        printf ("Vnesi izbor: \n0 Ispechati ja nizata so oceni \n1 Najdi ja maksimalnataocena\n2 Najdi ja minimalnata ocena\n3 Ispecati ja prosechnata ocena za sekoja student\n4 Kraj \n");
       scanf ("%d",&izbor);
       while (izbor >= 0 && izbor <=3){
        (*obrabotiOceni[izbor])(a,n);
         printf ("Vnesi izbor: \n0 Ispechati ja nizata so oceni \n1 Najdi ja maksimalnataocena\n2 Najdi ja minimalnata ocena\n3 Ispecati ja prosechnata ocena za sekoja student\n4 Kraj \n");
       scanf ("%d",&izbor);
       }
       printf ("Izvrshuvanjeto zavrshi !!! ");
       return 0;

}

void pecatiNiza (int a[][7], int n){
    int i,j;
    for(i=1; i<= n+1; i++){
            for (j=1; j<=6; j++)
            {
                if ( i == 1 ){
                    if (j == 1){
                        printf ("Student \t");
                    }
                    if (j > 1){
                        printf ("predmet %d\t",j-1);
                    }
                }
                if ( i > 1 && j==1){
                    printf ("Student %d\t",i-1);
                }
                if ( i >= 2 && j >= 2){
                printf ("%d \t\t",a[i][j]);
            }
            }
            printf ("\n");
         }

}
void max (int a[][7], int n) {
     int i,j,najgolem=0,st,pr;
    for(i=2; i<= n+1; i++){
            for (j=2; j<=6; j++){
                if (a[i][j] > najgolem){
                    najgolem = a[i][j];
                    st = i;
                    pr = j;
                }

            }

            printf ("\n");
         }
        printf ("Najvisoka ocena ima studentot %d po predmet %d",st-1,pr-1);
}
void min (int a[][7], int n) {
     int i,j,najgolem=10,st,pr;
    for(i=2; i<= n+1; i++){
            for (j=2; j<=6; j++){
                if (a[i][j] < najgolem){
                    najgolem = a[i][j];
                    st = i;
                    pr = j;
                }

            }

            printf ("\n");
         }
        printf ("Najniska ocena ima studentot %d po predmet %d \n",st-1,pr-1);
}

void prosek (int a[][7], int n) {
     int i,j;
     float prosek =0,zbir=0;
    for(i=2; i<= n+1; i++){
            for (j=2; j<=6; j++){
                    if (j == 2){
                        zbir = 0;
                        prosek = 0;
                        }
                    zbir = zbir + a[i][j];
                }
                    prosek = zbir/5;
                    printf ("prosek za student %d e: %.2f \n",i-1,prosek);

            }


}

           **************************************************** PREDAVANJE 11_2 **********************************************************************
//1. Напиши програм кој внесува телефонски број како стринг во облик (333) 333-3333.
//Програмот треба со користење на наредбата strtok да го извлече кодот на државата како едно делче, а потоа да го спои целиот телефонски број во друг стринг без -. 
// Програмот треба да го конвертира бројот на државата во int, а седмоцифрениот телефонски број во long. Двата бројат треба да бидат испечатени.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int main(){
   char num[SIZE];
   char num2[SIZE];
   char *delPtr;
   char *del2Ptr;
   int dr;
   long br;
    printf ("Vnesi telefonski broj vo oblik (xxx)xxx-xxx ");
    scanf ("%s",&num);

    del2Ptr = strtok(num,"()-");
    dr = atoi(del2Ptr);

    while (del2Ptr != NULL){
    del2Ptr = strtok (NULL,"()-");
    if (del2Ptr != NULL){
    strcat (num2,del2Ptr);

        }
    }



    br = atol(num2);
    printf ("Brojot na drzavata e %d\n",dr);
    printf ("%Brojot e %ld",br);

    return 0;
}

// zadaca2. Напиши програм кој чита датум во обликот 14/06/2005 и враќа датум во обликот 14 juni 2005. 
//Корисникот да има можност да внесува колку што сака датуми кои треба да бидат конвертирани во другиот излез.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int main(){
    char data[SIZE];
    int n,m;
    char *delPtr;
    char *mesec[]= {"Januari","Fevruari", "Mart","Aprli","Maj",

                        "Juni", "Juli","Avgust","Septemvri",

                        "Oktomvri","Noemvri","Dekemvri"};

    printf ("Vnesi datum vo oblik DD/MM/YYYY (vnesi 0 za kraj): ");
    scanf ("%s",&data);
    m = atoi(data);

        while (m != 0){
     delPtr = strtok(data,"/");
            while (delPtr != NULL){
            printf ("%s ",delPtr);
            delPtr = strtok(NULL,"/");
             if (delPtr != NULL)
                n = atoi(delPtr);
                if (n <= 12)
               delPtr = mesec[n-1];
        }
    printf ("\nVnesi datum vo oblik DD/MM/YYYY (vnesi 0 za kraj): ");
    scanf ("%s",&data);
    m = atoi(data);
    }
}


            **************************************************** PREDAVANJE 12 **********************************************************************


//1. Само со користење на операторот за шифтирање да се напише функција mnoziSoStepenOdDva која зема два целобројни аргументи:
//broj и stepen и ја пресметува следната вредност:
//broj * 2^stepen;

#include <stdio.h>
void mnoziSoStepenOdDva( unsigned br, unsigned st, unsigned rez );
int main()
{
   unsigned broj,stepen,rezultat;
    printf("Vnesi broj: ");
    scanf ("%u",&broj);
    printf ("Vnesi stepen: ");
    scanf ("%u",&stepen);
    mnoziSoStepenOdDva(broj,stepen,rezultat = broj << stepen);
}
void mnoziSoStepenOdDva( unsigned br, unsigned st, unsigned rez)
{
   unsigned c,d;

   unsigned pechatiMaska = 1 << 31;


      printf( "%7u = ", br );

   for ( c = 1; c <= 32; c++ ) {
      putchar( br & pechatiMaska ? '1' : '0' );
      br <<= 1;

      if ( c % 8 == 0 ) {
         putchar( ' ' );
      }
   }
   putchar( '\n' );

    printf( "%7u = ", st );


   for ( c = 1; c <= 32; c++ ) {
      putchar( st & pechatiMaska ? '1' : '0' );
      st <<= 1;

      if ( c % 8 == 0 ) {
         putchar( ' ' );
      }
   }
    putchar( '\n' );
   printf ("broj * 2^ stepen = ",br,st);
   printf( "%7u = ", rez );

      for ( c = 1; c <= 32; c++ ) {
      putchar( rez & pechatiMaska ? '1' : '0' );
      rez <<= 1;

      if ( c % 8 == 0 ) {
         putchar( ' ' );
      }
   }
     putchar( '\n' );
}

// zadaca 2  Напиши програм кој го превртува редоследот на битовите на целобројна unsigned вредност.
//Програмот треба да вчита вредност од корисникот и да ја повика функцијата prevtriBitovi за да се испечатат битовите во обратен редослед. 
//Вредностите на битовите да се испечатат и пред и после превртувањето.

#include<stdio.h>
#include<math.h>
void prevrtiBitovi (unsigned br, unsigned br2);

int main () {

    unsigned n;

    printf ("vnesi broj: ");
    scanf ("%u", &n);


    prevrtiBitovi(n,n);


}

void prevrtiBitovi (unsigned br, unsigned br2){

    unsigned c;
    unsigned rev=0;
    unsigned maska = 1<<31;

     printf ("%10u = ", br2);

    for(c=1; c <=32 ; c++){
        putchar( br2 & maska ? '1' : '0');
        br2 <<= 1;

        if(c%8 == 0)
            putchar(' ');
    }
    putchar ('\n');

   while (br > 0)
    {

        rev <<= 1;


        if (br & 1 == 1)
            rev ^= 1;


        br >>= 1;

    }
    printf ("%10u = ", rev);

    for(c=1; c <=32 ; c++){
        putchar( rev & maska ? '1' : '0');
        rev <<= 1;

        if(c%8 == 0)
            putchar(' ');
    }
    putchar ('\n');
   }

// zadaca 3  Да се открие и опише што работи следниот програм?
/* Program vezba11_01.c
   Shto raboti sledniot program?
#include <stdio.h>
 
int misterija( unsigned bitovi ); 
 
int main()
{ 
   unsigned x; 
   printf( "Vnesi cel broj: " );
   scanf( "%u", &x );
   printf( "Rezultatot e %d\n", misterija( x ) );
   return 0; 
} 
 
int misterija( unsigned bitovi )
{ 
   unsigned i;              
   unsigned maska = 1 << 31; 
   unsigned total = 0;      
 
   for ( i = 1; i <= 32; i++, bitovi <<= 1 ) {
      if ( ( bitovi & maska ) == maska ) { 
         total++;
      } 
   } 
   return !( total % 2 ) ? 1 : 0;
} */

// vrakja dali zbirot na edinicite vo brojot e paren ili nepare, za paren 1 za neparen 0 , pr 7 = 111 1+1+1=3 rezultat neparen(0), 9 = 1001 1+1=2 rezultat paren (1)


            **************************************************** PREDAVANJE 12_2 **********************************************************************

//zadaca1. 1. Вие сте сопственик на продавница за компјутерска опрема. Треба да си направите апликација која ќе се грижи за хардверот што го имате на располагање
// количината на секој од деловите во продавницата и цените на деловите. Напишете програма која иницијализира датотека “hardware.dat”, 
//ви овозможува да внесете податоци за секој дел, да ги излистате податоците за специфичен дел, да дадете комплетен листинг на состојбата во вашата продавница,
//да избришете податоци за даден дел ако тој веќе го немате на лагер, да ажурирате податоци за даден дел и да правите продажба.
//Под продажба се подразбира намалување на бројот на потребни делови од датотеката, доколку има толку делови, колку што бара купецот. 
//Да претпоставиме дека имаме оптички читач на касата и дека секој дел се вчитува со негов код. 

//За започнување со работа, користете ги следните информации:
//Код 	Име на дел	Количина	Цена
//3	glusec Mico	7	10.34
//56	monitor Kiki3	5	65.09
//75	tastatura Biko8	4	12.09
//89	matploc Ziko32	6	87.09




#include <stdio.h>

struct hardwareData {
    int Cod;
    char Opis[20];
    int Kol;
    double Cena;
};

int vnesiIzbor(void);
void vnesiPodatoci (FILE *fPtr);
void vidiPodatoci (FILE *fPtr);
void kompletPopis ( FILE *readPtr );
void izbrisiPodatoci (FILE *fPtr);
void azurirajPodatoci (FILE *fPtr);


int main () {
    FILE *cfPtr;
    int izbor;
    struct hardwareData hd = {0,"",0,0.0};

    if ((cfPtr = fopen ("hardware.dat","rb+")) == NULL)
        printf ("Datotekata ne moze da se otvori \n");
    else {

        while ((izbor = vnesiIzbor()) != 6) {
            switch (izbor) {

            case 1:
                vnesiPodatoci(cfPtr);
                break;

            case 2:
                vidiPodatoci(cfPtr);
                break;

            case 3:
                kompletPopis(cfPtr);
                break;

            case 4:
                izbrisiPodatoci(cfPtr);
                break;
            case 5:
                azurirajPodatoci(cfPtr);
                break;
            case 6:


            default :
                printf ("Gresen izbor!!\n");
                break;


            }
        }
        fclose(cfPtr);
    }
    return 0;
}

int vnesiIzbor (void)
{
    int izbormeni;

    printf ("\n Vnesi Izbor \n 1 - Vnesi podatoci \n 2 - Vidi podatoci za del \n 3 - Lista na sostojba vo prodavnica \n 4 - Izbrishi del \n 5 - Azuriraj del \n 6 -  Kraj \n ");
    scanf ("%d",&izbormeni);
    return izbormeni;
}
void vnesiPodatoci (FILE *fPtr)
{
    int kodProizvod;

   struct hardwareData hd = {0,"",0,0.0};

   printf ("Vnesi kod za nov proizvod: ");
   scanf ("%d",&kodProizvod);



   fseek (fPtr, (kodProizvod-1) * sizeof (struct hardwareData ),SEEK_SET);
   fread (&hd ,sizeof (struct hardwareData) ,1 ,fPtr);

   if (hd.Cod != 0){
        printf ("Proizvodot %d veke postoi.\n",hd.Cod);
   }
   else {
      printf ("Vnesi opis,kolicina i cena");
      scanf ("%s%d%lf",&hd.Opis,&hd.Kol,&hd.Cena);
      hd.Cod = kodProizvod;

       fseek (fPtr, (hd.Cod -1)*sizeof (struct hardwareData ),SEEK_SET);
       fwrite (&hd,sizeof (struct hardwareData),1,fPtr);

    }
}
void vidiPodatoci (FILE *fPtr){
int kodProizvod;

   struct hardwareData hd = {0,"",0,0.0};

   printf ("Vnesi kod za nov proizvod: ");
   scanf ("%d",&kodProizvod);

   fseek (fPtr, (kodProizvod-1)*sizeof (struct hardwareData ),SEEK_SET);
   fread (&hd,sizeof (struct hardwareData),1,fPtr);
   if (hd.Cod == 0)
        printf ("Proizvodot %d go nema.\n",kodProizvod);
   else {
        printf( "%-8s%-16s%-11s%10s\n",
         "Kod", "Opis", "Kolicina","Cena" );
    printf ("%-8d%-16s%-11d %10.2f \n\n",hd.Cod,hd.Opis,hd.Kol,hd.Cena);
}
}
void kompletPopis ( FILE *readPtr )
{
   FILE *writePtr;
   struct hardwareData hd = { 0, "", 0, 0.0 };

   if ( ( writePtr = fopen( "hardware.txt", "w" ) ) == NULL ) {
      printf( "Datotekata ne mozhe da se otvori.\n" );
   }
   else {
      rewind( readPtr );
      fprintf( writePtr, "%-8s%-16s%-11s%10s\n",
         "Kod", "Opis", "Kolicina","Cena" );


      while ( !feof( readPtr ) ) {
         fread( &hd, sizeof( struct hardwareData ), 1, readPtr );


         if ( hd.Cod != 0 ) {
            fprintf( writePtr, "%-8d%-16s%-11d%10.2f\n",
               hd.Cod, hd.Opis,
               hd.Kol, hd.Cena );
         }
      }

      fclose( writePtr );
   }

}
void izbrisiPodatoci (FILE *fPtr){

    int vnes;

    struct hardwareData hd ;
    struct hardwareData blankHd = {0,"",0,0.0};

    printf ("Vnesi kod za del: ");
    scanf ("%d",&vnes);

    fseek (fPtr, (vnes - 1) * sizeof (struct hardwareData),SEEK_SET );
    fread (&hd,sizeof (struct hardwareData),1,fPtr);

    if (hd.Cod == 0){
        printf ("Nema takov proizvod. ");
    }
    else {
        fseek (fPtr, (vnes - 1) * sizeof (struct hardwareData),SEEK_SET );
        fwrite (&blankHd,sizeof (struct hardwareData),1,fPtr);

    }
}
void azurirajPodatoci (FILE *fPtr){

    int vnes;
    int koli;

    struct hardwareData hd;

    printf ("Vnesi kod za proizvod za koj treba da se promenat podatoci: ");
    scanf ("%d",&vnes);

    fseek (fPtr,(vnes -1 )*sizeof (struct hardwareData),SEEK_SET);
    fread (&hd, sizeof (struct hardwareData),1,fPtr);

    if (hd.Cod == 0){
        printf ("Nema proizvod so kod %d.\n",vnes);
    }
    else {
          printf( "Vnesi priem na edinici proizvod (+) ili prodazba (-): ");
          scanf ("%d",&koli);
          hd.Kol += koli;
          printf ("Nova sostojba za proizvodot: \n");
          printf( "%-8d%-16s%-11d%10.2f\n",
               hd.Cod, hd.Opis,
               hd.Kol, hd.Cena );
    fseek (fPtr,(vnes -1)*sizeof (struct hardwareData),SEEK_SET);
    fwrite (&hd,sizeof (struct hardwareData),1,fPtr);


            }
}


           **************************************************** PREDAVANJE 01 od CPP **********************************************************************
// zadaca 1 

#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

inline double circleArea (const double r) {return r*r*3.14;}

int main()
{

    double n;
    cout << "vnesi broj" << endl;
    cin >> n ;
    cout << "broj = " << circleArea(n) << endl;
    return 0;
}


// zadaca2 #include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int trippleCallbyValue (int);
void trippleCallByReference (int &);

int main()
{

    int n;
    cout << "vnesi broj" << endl;
    cin >> n ;
    cout << "broj (by value) = " << trippleCallbyValue(n) << endl;
    trippleCallByReference (n);
    cout << "broj (by reference) = "<< n << endl;
    return 0;
}

int trippleCallbyValue (int br)
{
    br = br*3;
    return br;
}
void trippleCallByReference (int &brRef){
    brRef = brRef*3;

}

           **************************************************** PREDAVANJE 02 od CPP **********************************************************************
           
                      
                      #include<iostream>
#define SIZE 100
using namespace std;


template <typename M>
M minimum (M vrednost1, M vrednost2)
{
   M min = vrednost1;

   if (vrednost2 < vrednost1)
    min = vrednost2;

    return min;
}
int main () {
    int br1,br2;
    float fl1,fl2;
    char kar1,kar2;

    cout << "vnesi dva celi broja" << endl;
    cin >> br1 >> br2;
    cout << "pomal od broevite e: "<< minimum(br1,br2) << endl;

    cout << "vnesi dva realni broevi" << endl;
    cin >> fl1 >> fl2;
    cout << "pomal od broevite e: " << minimum (fl1,fl2) << endl;

    cout << "vnesi dva karakteri " << endl;
    cin >> kar1 >> kar2;
    cout << "pomal od karakterite e: " << minimum (kar1,kar2) << endl;



}

            **************************************************** PREDAVANJE 03 od CPP **********************************************************************

//zadaca1. 1. Да се формира класа Квадар (скриени елементи: должина, ширина и висина; јавни функции: плоштина, волумен). 
//Од неа да се имплементира поле од објекти. Да се најде оној кој има најмала плоштина, а не е коцка. Да се креира мени:
//a)	Креирај нов објект
//b)	Постави ги димензиите
//c)	Печати ги димензиите на сите објекти
//d)	Печати ги димензиите за поедин објект
//e)	Печати ги оние кои го задоволуваат условот

#include<iostream>
#define SIZE 100
using namespace std;

class Kvadar {
 private :
     int dolzina;
     int shirina;
     int visina;

public :

    void setDolzina (int dol){
        dolzina = dol;
    }
    int getDolzina () {
        return dolzina;
    }
     void setShirina (int shi){
        shirina = shi;
    }
    int getShirina () {
        return shirina;
    }
     void setVisina (int vis){
        visina = vis;
    }
    int getVisina () {
        return visina;
    }


    int plostina () {
        return 2*(dolzina+shirina+visina);
    }
    int volumen (){
        return dolzina*shirina*visina;
    }
    void kreirajObjekt();
    bool Kocka () {
        return (dolzina == shirina) && (dolzina == visina) && (shirina == visina);
    }

};
void Kvadar::kreirajObjekt () {

    int d,s,v;

    cout << "Vnesi dolzina " << endl;
    cin >> d;
    setDolzina(d);
    cout << "Vnesi shirina " << endl;
    cin >> s;
    setShirina(s);
    cout << "Vnesi visina" << endl;
    cin >> v;
    setVisina(v);

}

void pecatiObjekt(Kvadar *kv) {
    int i;
    cout << "vnesi indeks na objekt za pecatenje: " << endl;
    cin >> i;
    cout << "ind " << "dol " << "shir " << "vis " << endl;
    if (kv[i].plostina() != 0 )
    {
        cout << i << "    " << kv[i].getDolzina() << "    " << kv[i].getShirina() << "    "<< kv[i].getVisina() << endl;
    }
    else
    {
        cout << " Nema objekt so takov indeks" << endl;
    }
}

void ispecatiSite(Kvadar *kv, int i ) {

    cout << "ind " << "dol " << "shir " << "vis " << endl;
    for (i = 0; i <= 99; i++){
        if (kv[i].plostina() != 0){
            cout << i << "    " << kv[i].getDolzina() << "    "<< kv[i].getShirina() << "    " << kv[i].getVisina() <<endl;
        }
    }
}

void pecatiNajmalObjekt(Kvadar *kv){
int i,ind;

for (i=1;i <= 99;i++){
        if (kv[i].plostina() != 0 )
            ind = i;
    if (kv[i].plostina() !=0 && !kv[i].Kocka()  && kv[i].volumen() < kv[ind].volumen())
        ind = i;
}
     cout << "ind " << "dol " << "shir " << "vis " << endl;
     cout << ind << "    " << kv[ind].getDolzina() << "    "<< kv[ind].getShirina() << "    " << kv[ind].getVisina() <<endl;
}
int main () {

Kvadar kv[SIZE];
 int vnes=10,ind,i;
for (i=0;i<=100;i++){
    kv[i].setVisina(0);
    kv[i].setDolzina(0);
    kv[i].setShirina(0);
}


   while (vnes != 0){
    cout << "Meni: " << endl;
    cout << "0 - Kraj" << endl;
    cout << "1 - Kreiraj nov objekt" << endl;
    cout << "2 - Ispecati gi site objekti " << endl;
    cout << "3 - Ispecati poedinecen objekt po indeks" << endl;
    cout << "4 - Pecati objekt koj go zadovoluva uslvovot (najmal a da ne e kocka)" << endl;
     cin >> vnes;

    switch (vnes) {
            case 1:
            cout << "vnesi indeks za noviot objekt: " << endl;
            cin >> ind;
            if (kv[ind].plostina() != 0){
                cout << "veke ima objekt so toj indeks" << endl;
                }
                else
            kv[ind].kreirajObjekt();
            break;

            case 2:
            ispecatiSite(kv, ind);
            break;

            case 3:
            pecatiObjekt(kv);
            break;

            case 4:
            pecatiNajmalObjekt(kv);


                }

        }

   }


//zadaca 2 2. Да се направи програма која ќе ја користи класата Штедач и ќе овозможи: 
//a)	Внесување на нов штедач во системот
//b)	Приказ на податоците
//c)	Уплата на средства
//d)	Исплата на средства (со контрола дали е можна таква исплата)
//e)	Приказ на салдото за даден штедач
//class Stedac
//{
 //public:
  //      void vnesi_podatoci();
  //      void prikazi_podatoci();
  //      void uplata(unsigned long i);
  //      void isplata(unsigned long i);
  //      long sostojba();

 // private:
  //      int broj;
  //      char imeprezime[30], adresa[50];
  //      long saldo;


#include<iostream>
#include<string.h>
#include<iomanip>
#include <string>
#define SIZE 100
using namespace std;

class Stedac {
 private :
     int broj;
     char imeprezime[30],adresa[50];
     long saldo;

public :

    void setBroj (int br){
        broj = br;
    }
    int getBroj () {
        return broj;
    }
     void setImePrezime (char *imepr){
        strcpy(imeprezime,imepr)  ;
    }
    char* getImePrezime () {
        return imeprezime;
    }
     void setAdresa (char *adr){
        strcpy(adresa,adr);
    }
    char* getAdresa () {
        return adresa;
    }
    void setSaldo (long sal){
        saldo = sal;
    }
    long getSaldo () {
        return saldo;
    }


    void vnesi_podatoci(int br);


};
void Stedac::vnesi_podatoci (int br) {


    char imepr[30], adr[50];
    long sld;


    setBroj(br);
    cin.ignore();
    cout << "ImePrezime " << endl;
    cin.getline(imepr,29);
    setImePrezime(imepr);
    cout << "Vnesi adresa" << endl;
    cin.getline(adr,49);
    setAdresa(adr);
    cout << "Vnesi saldo" << endl;
    cin >> sld;
    setSaldo(sld);
}

void prikaziStedac(Stedac *st) {
    int i;
  cout << "vnesi broj na stedac za prikaz: " << endl;
    cin >> i;
    if (st[i].getBroj() != 0 )
    {

    cout  << setw(10) << left << "Broj"
              << setw(30) << left << "Ime i prezime"
              << setw(50) << left << "Adresa"
              << setw(10) << left << "Saldo" << endl;

        cout  << setw(10) << left << st[i].getBroj()
              << setw(30) << left << st[i].getImePrezime()
              << setw(50) << left << st[i].getAdresa()
              << setw(10) << left << st[i].getSaldo() << endl;
    }
    else
    {
        cout << " Nema stedac so takov broj" << endl;
    }
}

void uplata(Stedac *st ) {
    int i;
    long uplata;
    cout << "Vnesi broj na stedac sto uplakja: " <<endl;
    cin >> i;
    cout << "vnesi kolku se uplakja: " << endl;
    cin >> uplata;

    st[i].setSaldo(st[i].getSaldo() + uplata);
    cout << "Nova sostojba: " << endl;
    cout << st[i].getSaldo() << endl;

    }


void isplata (Stedac *st){
    int i;
    long isplata;
    cout << "Vnesi broj na stedac sto bara isplata: " <<endl;
    cin >> i;
    cout << "vnesi kolku se isplakja: " << endl;
    cin >> isplata;

    if (st[i].getSaldo() <= isplata)
        cout << "Nemate dovolno sredstva" << endl;

    else{
        st[i].setSaldo(st[i].getSaldo() - isplata);
        cout << "Novsa sostojba " << endl;
        cout << st[i].getSaldo() << endl;
    }
}

void prikazi_podatoci (Stedac *st) {
    int i;
      cout  << setw(10) << left << "Broj"
              << setw(30) << left << "Ime i prezime"
              << setw(50) << left << "Adresa"
              << setw(10) << left << "Saldo" << endl;
      for (i = 0; i <= 99; i++){
        if (st[i].getBroj() != 0){
            cout  << setw(10) << left << st[i].getBroj()
              << setw(30) << left << st[i].getImePrezime()
              << setw(50) << left << st[i].getAdresa()
              << setw(10) << left << st[i].getSaldo() << endl;
        }
    }
}


int main () {

    Stedac st[SIZE];
 int vnes=10,ind,i;
for (i=0;i<=100;i++){
    st[i].setBroj(0);
    st[i].setImePrezime(" ");
    st[i].setAdresa(" ");
    st[i].setSaldo(0);
}


    while (vnes != 0){
    cout << "Meni: " << endl;
    cout << "0 - Kraj" << endl;
    cout << "1 - Vnesi stedac" << endl;
    cout << "2 - Prikaz na podatoci " << endl;
    cout << "3 - Uplata na smetka" << endl;
    cout << "4 - Isplata na sredstva" << endl;
    cout << "5 - Prikaz na saldo za stedac" << endl;
     cin >> vnes;

    switch (vnes) {
            case 1:
            cout << "Vnesi broj na stedac: " << endl;
            cin >> ind;
            if (st[ind].getBroj() != 0){
                cout << "Postoi stedac so toj broj " << endl;
                }
                else
            st[ind].vnesi_podatoci(ind);
            break;

            case 2:
            prikazi_podatoci(st);
            break;

            case 3:
            uplata(st);
            break;

            case 4:
            isplata(st);
            break;

            case 5:
            prikaziStedac(st);


                default: cout << "Vnesovte greska opcija" << endl;
                break;

        }

   }

   }


           **************************************************** PREDAVANJE 04 od CPP **********************************************************************

//zadaca 1. Создади класа Dropki која извршува операции со дропки. Напиши „драјвер“ за твојот програм да манипулира со оваа класа.

//Користи целоборјни променливи за броител и именител кои мора да се приватни. Обезбеди потребен број на контруктори кои нема да дозволат дефинирање на грешни вредности (со 0 не се дели!). По секоја од наредните операции, дропката треба да се зачува во редуцирана форма, т.е дропката 2/4 треба да се зачува како 1/2. Обезбеди ги следните јавни функции членки:
//	а) Собирање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма.
//	б) Одземање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
//	в) Множење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
//	г) Делење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
//	д) Печатење на објектот во форма a/b.
//	ѓ) Печатење на објектот во форма на реален број.


// VO main.cpp

#include <iostream>

#include "Dropki1.h"
using namespace std;

int main()
{
    int i,b,i2,b2;
    Dropki1 dr ,dr2,dr3;


    cout << "Vnesi Imenitel na prva dropka " << endl;
    cin >> i;
    dr.setImenitel(i);

    cout << "Vnesi broitel na prva dropka" << endl;
    cin >> b;
    dr.setBroitel(b);

    cout << "Vnesi imenitel na vtora dropka " << endl;
    cin >> i2;
    dr2.setImenitel(i2);

    cout << "Vnesi broitel na vtora dropka " << endl;
    cin >> b2;
    dr2.setBroitel(b2);

    
}
// vo dropki1.h
#ifndef DROPKI1_H
#define DROPKI1_H


class Dropki1
{
    public:
        Dropki1();
       void setImenitel(int);
       void setBroitel (int);
       int getBroitel();
       int getImenitel();
       int nzd(int,int);
       void reduiraj(int i,int b);
       int nzs(int,int);
        void soberiDropki (Dropki1 dr1,Dropki1 dr2);
        void odzemiDropki (Dropki1 dr1,Dropki1 dr2);
        void mnoziDropki (Dropki1 dr1, Dropki1 dr2);
        void deliDropki (Dropki1 dr1, Dropki1 dr2);
        void pecatiDropka (Dropki1 dr);
        void pecatiDecimalen(Dropki1 dr);

    private:
        int imenitel;
        int broitel;
};

#endif // DROPKI1_H

// vo dropki1.cpp
#include <iostream>
using namespace std;
#include "Dropki1.h"

Dropki1::Dropki1() {imenitel = broitel = 0;}

    void Dropki1::setImenitel(int i)
    {

        imenitel = i;
    }
    void Dropki1::setBroitel(int b)
    {
        if (b == 0)
            cout << "So 0 ne se dele" << endl;
        else
        broitel = b;
    }

    int Dropki1::getImenitel (){
        return imenitel;
    }

    int Dropki1::getBroitel () {
        return broitel;
    }

    int Dropki1::nzd(int br1,int br2){
        int priv;


        while(1) {
            if (br2 == 0)
                return br1;
            int priv = br1%br2;
            br1 = br2;
            br2 = priv;

        }
    }

    int Dropki1::nzs(int br1, int br2){

    return (br1 / nzd(br1, br2)) * br2;

    }

    void Dropki1::reduiraj (int i, int b) {
        int br;
        br = nzd(i,b);
        imenitel = i / br;
        broitel  = b / br;

    }

    void Dropki1::soberiDropki (Dropki1 dr1, Dropki1 dr2) {
        int i,b;

        b = nzs(dr1.getBroitel(),dr2.getBroitel());
        i = dr1.getImenitel()*(b/dr1.getBroitel()) + dr2.getImenitel()*(b/dr2.getBroitel());

        reduiraj(i,b);
       cout << imenitel <<endl;
       cout << broitel << endl;


    }

    void Dropki1::odzemiDropki (Dropki1 dr1, Dropki1 dr2) {
        int i,b;

         b = nzs(dr1.getBroitel(),dr2.getBroitel());
        i = dr1.getImenitel()*(b/dr1.getBroitel()) - dr2.getImenitel()*(b/dr2.getBroitel());

        reduiraj(i,b);
       cout << imenitel <<endl;
       cout << broitel << endl;
    }

    void Dropki1::mnoziDropki (Dropki1 dr1, Dropki1 dr2){
        int i,b;

        i = dr1.getImenitel() * dr2.getImenitel();
        b = dr1.getBroitel() * dr2.getBroitel();

        reduiraj(i,b);
        cout << imenitel <<endl;
       cout << broitel << endl;

    }

    void Dropki1::deliDropki (Dropki1 dr1, Dropki1 dr2) {
        int i,b;

        i = dr1.getImenitel() * dr2.getBroitel();
        b = dr1.getBroitel() * dr2.getImenitel();

        reduiraj (i,b);
        cout << imenitel <<endl;
       cout << broitel << endl;
    }

    void Dropki1::pecatiDropka (Dropki1 dr){
        cout << dr.getImenitel() << "/" << dr.getBroitel() << endl;
    }
    void Dropki1::pecatiDecimalen(Dropki1 dr){
        cout << (double) imenitel / broitel << endl;
    }


 **************************************************** PREDAVANJE 05 od CPP **********************************************************************

// zadaca 1 1. Во една зоолошка градина се води евиденција за различни типови животни кои се чуваат во неа: птици, влекачи, цицачи.... 
//Користејќи ги концептите на ООП да се моделира класа според спецификациите дадени на слика 5.1.
 //   Цицачите се вакцинираат секоја година, птиците на секои 6 месеци, а влекачите на секои 8 месеци. 
  //  Датумите да се дефинираат во посебна класа Datum со приватни податочни членки den, mesec и godina.
            //Да се имплементира кориснички посредник преку мени со следните опции:
//1.	Додавање на животно во зоолошка градина
//2.	Прикажување на бројна состојба
///3.	Прикажување на животни од дадена група (тип: c- цицачи, v-влекачи, p-птици)
//4.	Прикажување на целата листа
//5.	Прикажување на сите животни кои треба да се вакцинираат во рок од 1 недела
//6.	Излез од менито

//Klasa: Zivotno
//Podatoci:
//Datum_na_ragjanje
//Datum_na_donesuvawe_vo_zoo
//tip
//Pol (m/z)
//Ime
//Datum_na_posledna_vakcinacija
//Metodi:
//Konstruktor()
//Prikazi_Podatoci()
//Presmetaj_vakcinacija()

// Vo main.cpp
#include <iostream>
#include "datum.h"
#include "Zivotno.h"
#include "Zoo.h"
#define SIZE 1000
#include <datum.h>
#include<istream>


using namespace std;

int main()
{
     Zoo z1;




   {

    while(true)
    {

        cout << "1 - Dodadi zivotno" << endl;
        cout << "2 - Prikazi broj na zivotni" << endl;
        cout << "3 - Prikazi zivotni od dadena grupa (c-cicaci, v-vlekaci, p-ptici)" << endl;
        cout << "4 - Prikazi cela lista na zivotni" << endl;
        cout << "5 - Prikazi zivotni koi treba da se vakciniraat vo rok od 1 nedela" << endl;
        cout << "6 - Izlez" << endl;
        cout << "Opcija: ";
        int opcija;
        cin >> opcija;

        if (opcija == 6)
            break;

        switch(opcija)
        {
            case 1: z1.novoZivotno();break;
            case 2: z1.brojNaZivotni();break;
            case 3: z1.prikaziGrupa();break;
            case 4: z1.prikaziLista();break;
            case 5: z1.prikaziVak();break;
        }
        }
    }



}
// vo Zivotno.h
#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include "datum.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Zivotno
{
    public:
    Zivotno( const char *zIme, char zPol,char zTip , int rden , int rmesec, int rgodina, int dden, int dmesec, int dgodina, int vden, int vmesec, int vgodina);

    void print() const;
    void vnesizivotno(Zivotno *ziv);
    char getTip(){
        return tip;
    }
    datum getVden() const
    {
       return vakdatum;
    }



    private:
        char tip;
        char pol;
        char ime [15];
        const datum ragdatum;
        const datum dojdatum;
        const datum vakdatum;

};

#endif // ZIVOTNO_H
// vo Zivotno.cpp

#include "Zivotno.h"
#include "datum.h"
#include <cstring>
#include <iostream>

using namespace std;


Zivotno::Zivotno( const char *zIme, char zPol,char zTip ,  int rden , int rmesec, int rgodina, int dden, int dmesec, int dgodina, int vden, int vmesec, int vgodina)
: ragdatum (rden,rmesec,rgodina), dojdatum (dden,dmesec,dgodina),vakdatum(vden,vmesec,vgodina)
{
    int length = strlen(zIme);
    length = (length = 15 ? length : 14);
    strncpy(ime,zIme,length);
    ime[length] = '\0';

    pol = zPol;
    tip = zTip;

}
void Zivotno::print () const {
   ragdatum.prikaziDatum();
   cout << "  ";
   dojdatum.prikaziDatum();
   cout << "   ";
   cout << pol;
   cout << "    ";
   cout << tip;
   cout << "    ";
   cout << ime;
   cout << "   ";
   vakdatum.prikaziDatum();
   cout << endl;

    }



/*Zivotno::~Zivotno()
{
   cout << "Destruktor na objekt od klasata Employee : "
        << lastName << ", " << firstName << endl;
} */


// vo datum.h

#ifndef DATUM_H
#define DATUM_H
using namespace std;


class datum
{
    public:
        datum(int d=1,int m=1, int g=2007);
    int proveriDen(int testDen);
      void  prikaziDatum () const ;

      const int getDen (){
        return den;
       }
       days(const datum& d);
       const int getMesec(){
        return mesec;
       }
       const int getGod() {
        return godina;
       }

    private:
        int den;
        int mesec;
        int godina;
};

#endif // DATUM_H

// vo datum.cpp
#include "datum.h"
#include <iomanip>
#include <iostream>

using namespace std;
    datum::datum (int d,int m,int g){
       if (m > 0 && m <=12)
        mesec = m;
       else {
            mesec = 1;
        cout << "ne postoi takov mesec" << endl;
       }


    godina = g;

    den = proveriDen (d);

    }


void datum :: prikaziDatum () const { cout << den << "/" << mesec <<"/" << godina;}

int datum :: proveriDen (int testDen){
    static const int denoviVoMesec [13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (testDen > 0 && testDen < denoviVoMesec[mesec])
        return testDen;
    if (mesec == 2 && testDen == 29 && (godina % 400 == 0 || (godina % 4 == 0 && godina %100 != 0)))
        return testDen;

    cout << "Denot e gresen " << endl;
    return 1;

}


/*datum::~datum()
{
   cout << "Destruktor na klasata Date " << endl;
   prikaziDatum();
   cout << endl;
}*/

// vo Zoo.h
#ifndef ZOO_H
#define ZOO_H
#include "Zivotno.h"


class Zoo
{
    public:
        Zoo();
      void  vnesiZivotno(Zivotno *ziv);
      void novoZivotno();
      void brojNaZivotni();
      void prikaziGrupa();
      void prikaziLista();
      void prikaziVak();

    private:
        Zivotno **ziv;
        int brojZivotni;
};

#endif // ZOO_H

// vo Zoo.cpp
#include "Zoo.h"
#include "Zivotno.h"
#define SIZE 100
#include "datum.h"
#include<iostream>

using namespace std;

Zoo::Zoo()
{
    brojZivotni = 0;
   ziv = new Zivotno*[SIZE];
}

void Zoo::vnesiZivotno(Zivotno *z){
    ziv[brojZivotni++] = z;
}

void Zoo::brojNaZivotni(){
    cout << "Broj na zivotni: " << brojZivotni << endl;
}


void Zoo::prikaziGrupa (){
    int i;
    char grupa;

    cout << "Vnesete grupa za prikaz (c-cicaci,v-vlekaci,p-ptici): " <<endl;
    cin >> grupa;
    if (brojZivotni > 0){
        cout << setw(13) << left << "data na Rag"
             << setw(13) << left << "data na Dones"
             << setw(5) << left << "pol"
             << setw(5) << left << "tip"
             << setw(13) << left << "data na Vak" <<endl;
    for (i =0; i<= brojZivotni; i++){
         Zivotno* z = ziv[i];
        if ( z->getTip() == grupa)
           z->print();
        }
    }
    else {
        cout << "nema zivotni vo zoo" << endl;
    }
}

void Zoo::novoZivotno() {


    char aTip;
    char aPol;
    char aIme[15];
        int rden;
        int rmesec;
        int rgodina;
        int dden;
        int dmesec;
        int dgodina;
        int vden;
        int vmesec;
        int vgodina;


        cout << "Vnesete den na raganje: " << endl;
        cin >> rden;
        cout << "Vnesete mesec na raganje: "<< endl;
        cin >> rmesec;
        cout << "Vnesete godina na raganje: " <<endl;
        cin >> rgodina;
         cout << "Vnesete den na donesuvanje: " <<endl;
        cin >> dden;
        cout << "Vnesete mesec na donesuvanje: " <<endl;
        cin >> dmesec;
        cout << "Vnesete godina na donesuvanje: " <<endl;
        cin >> dgodina;

        cout << "Vnesete tip (c-cicaci, v-vlekaci, p-ptici): ";
        cin >> aTip;

        cout << "Vnesete pol (m-masko, z-zensko): ";
        cin >> aPol;
        cout << "Vnesete ime: ";
        cin >> aIme;
         cout << "Vnesete den na vakcinacija: "<< endl;
        cin >> vden;
        cout << "Vnesete mesec na vakcinacija: " <<endl;
        cin >> vmesec;
        cout << "Vnesete godina na vakcinacija: " <<endl;
        cin >> vgodina;

        vnesiZivotno( new Zivotno(aIme,aPol,aTip,rden,rmesec,rgodina,dden,dmesec,dgodina,vden,vmesec,vgodina));
}

void Zoo::prikaziLista (){
    int i;
    char grupa;


    if (brojZivotni > 0){
        cout << setw(13) << left << "data na Rag"
             << setw(13) << left << "data na Dones"
             << setw(5) << left << "pol"
             << setw(5) << left << "tip"
             << setw(13) << left << "data na Vak" <<endl;
    for (i =0; i<= brojZivotni; i++){
         Zivotno* z = ziv[i];
           z->print();
        }
    }
    else {
        cout << "nema zivotni vo zoo" << endl;
    }
}
void Zoo::prikaziVak (){
   datum *d;
   int den,mesec,godina;

   cout << "vnesete denesen den" << endl;
   cin >> den;
   cout <<"vnesete mesec " << endl;
   cin >> mesec;
   cout << "vnesete godina:" << endl;
   cin >> godina;
   d = new datum(den,mesec,godina);




    for (int i=0;i<=brojZivotni;i++){
             Zivotno *z = ziv[i];
      int mesec_vak,momen_mesec;
      mesec_vak = ziv[i]->getVden().getMesec();
      momen_mesec = d->getMesec();

        switch (z->getTip()){
        case 'p':
      if (mesec_vak < 6 && momen_mesec >= mesec_vak + 6){
         ziv[i]->print();
            }
      if (mesec_vak > 6 && (momen_mesec+12) - mesec_vak > 6){


        ziv[i]->print();
            }

        case 'c':
             if (mesec_vak >= momen_mesec && ziv[i]->getVden().getGod() > d->getGod() ){
         ziv[i]->print();
            }



        case 'v':
         if (mesec_vak < 8 && momen_mesec >= mesec_vak + 8){
         ziv[i]->print();
      }
      if (mesec_vak > 8 && (momen_mesec+12) - mesec_vak > 8){


        ziv[i]->print();
      }
        }
    }

}


/*Zoo::~Zoo()
{

}*/

           **************************************************** PREDAVANJE 06 od CPP **********************************************************************


//1. Создади класа Stedac во која ќе користиш статичка податочна членка kamata која 
//ќе ја чува вредноста на годишната камата за сите штедачи и статична податочна членка brojStedaci кој во секој момент кажува колку штедачи има во банката.
//Останатите податочни членки се lice, bilans и kredit. 
 //Името, презимето, адресата и телефонот на секој објeкт од класата Stedac  се сместени во приватна податочна членка lice која е од класaта Covek. 
// vo main

#include <iostream>
#include "Covek.h"
#define SIZE 100
#include "Stedac.h"
using namespace std;

int main()
{
     Stedac s1("Goce","Delcev","Kukush","123321",23500,2.3);
     cout << "br na stedaci: " << s1.getBrStedaci() << "   Vkupna kamata " << s1.getKamata() << endl;
     Stedac s2("Marko","Cepenkov","Prilep","432423",3500,0.2);
     cout << "br na stedaci: " << s1.getBrStedaci() << "   Vkupna kamata " << s1.getKamata() << endl;
     Stedac s3("Dame","Gruev","Krusevo","432423",35009,0.4);
     cout << "br na stedaci: " << s1.getBrStedaci() << "   Vkupna kamata " << s1.getKamata() << endl;

}

//stedac.h

#ifndef STEDAC_H
#define STEDAC_H
#include "Covek.h"
#include <iostream>
#include <cstring>

class Stedac
{
    public:
        Stedac(const char *ime, const char *prezime,const char *adresa,const char *telefon, double bilance, double credit);


    static int getBrStedaci();

   double getKamata();




    private:
        static double kamata;
        static int brStedaci;
        Covek lice;
        double bilans;
        double kredit;
};

#endif // STEDAC_H
//stedac.cpp
#include "Stedac.h"
#include "Covek.h"
#include<iostream>
using namespace std;

int Stedac::brStedaci =0;
double Stedac::kamata = 0;
Stedac::Stedac(const char *ime, const char *prezime,const char *adresa,const char *telefon, double bilance, double credit)
{
    lice = Covek(ime,prezime,adresa,telefon);
    bilans = bilance;
    kredit = credit;

    ++brStedaci;
    kamata += bilans * kredit;

}
int Stedac::getBrStedaci() {
    return brStedaci;
 }
 double Stedac::getKamata(){
    return kamata;
 }

Stedac::~Stedac()
{
    --brojStedaci;
    kamata -= bilans*kredit;
}
// Covek.h
#ifndef COVEK_H
#define COVEK_H


class Covek
{
    public:
        Covek(){}


        Covek(const char *Ime, const char *Prezime,const char *address,const char*phone);
        const char *getIme();
        const char *getPrezime();
        const char *getAdresa();
        const char *getTelefon();
        void prikazi();



    private:
       char *Ime;
       char *Prezime;
       char *Adresa;
       char *Telefon;
};

#endif // COVEK_H

// Covek.cpp
#include "Covek.h"
#include <cstring>
#include <cassert>
using namespace std;
#include <iomanip>
#include <iostream>


Covek::Covek(const char *Name, const char *Lname,const char *address,const char*phone)
{
    Ime = new char[strlen(Name) + 1 ];
    assert (Ime != 0);
    strcpy (Ime,Name);
    Prezime = new char[strlen(Lname) + 1 ];

    assert (Prezime != 0);
    strcpy (Prezime,Lname);

    Adresa = new char[strlen(address) + 1 ];
    assert(Adresa != 0);
    strcpy (Adresa,address);

    Telefon = new char[strlen(phone) + 1 ];
    assert (Telefon != 0);
    strcpy(Telefon,phone);

}

void Covek::prikazi(){
    cout  << getIme() << getPrezime() << getAdresa() << getTelefon();
}


const char *Covek::getIme() {
    return Ime;
}

const char *Covek::getPrezime() {
    return Prezime;
}
const char *Covek::getAdresa() {
    return Adresa;
}
const char *Covek::getTelefon() {
    return Telefon;
}

Covek::~Covek()
{
    delete [] Ime;
    delete [] Prezime;
    delete [] Adresa;
    delete [] Telefon;
}

            **************************************************** PREDAVANJE 07 od CPP **********************************************************************


// vo main 

#include <iostream>

#include "Dropki1.h"
using namespace std;

int main()
{
    Dropki1 dr(3,8);
    Dropki1 dr2(2,4);
    
    Dropki1 dr3;


    dr3 = dr+dr2;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);


    dr3 = dr-dr2;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);

     dr3 = dr*dr2;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);

     dr3 = dr/dr2;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);

     dr3 = dr+3;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);

     dr3 = dr-3;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);

     dr3 = dr*3;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);

     dr3 = dr/3;
    dr3.reduiraj(dr3.getImenitel(),dr3.getBroitel());
    dr3.pecatiDropka(dr3);
    dr3.pecatiDecimalen(dr3);



}


// vo Dropki1.h

#ifndef DROPKI1_H
#define DROPKI1_H


class Dropki1
{
    public:
        Dropki1 () {imenitel =0, broitel =0;}
        Dropki1(int im,int br);


        Dropki1 operator+(Dropki1 dr);
        Dropki1 operator-(Dropki1 dr);
        Dropki1 operator*(Dropki1 dr);
        Dropki1 operator/(Dropki1 dr);
        Dropki1 operator+(int i);
        Dropki1 operator-(int i);
        Dropki1 operator*(int i);
        Dropki1 operator/(int i);

        void zemi_im_br(int &im,int &br) {im = imenitel; br = broitel;}
       int getBroitel();
       int getImenitel();
       int nzd(int,int);
       void reduiraj(int i,int b);
       int nzs(int,int);

        void pecatiDropka (Dropki1 dr);
        void pecatiDecimalen(Dropki1 dr);

    private:
        int imenitel;
        int broitel;

};

#endif // DROPKI1_H

// vo Dropki1.cpp

#include <iostream>
using namespace std;
#include "Dropki1.h"

Dropki1::Dropki1(int im,int br){
    imenitel = im;
    broitel = br;
}

Dropki1 Dropki1::operator+(Dropki1 dr){
    Dropki1 dr2;
       if (broitel == dr.broitel){
        dr2.broitel = broitel;
        dr2.imenitel = imenitel + dr.imenitel;
       }
    else {
        int tp = nzs(broitel,dr.broitel);
        dr2.broitel = tp;
        dr2.imenitel = (tp/broitel)*imenitel + (tp/dr.broitel)*dr.imenitel;
    }
        return dr2;
}

Dropki1 Dropki1::operator-(Dropki1 dr){
    Dropki1 dr2;
       if (broitel == dr.broitel){
        dr2.broitel = broitel;
        dr2.imenitel = imenitel - dr.imenitel;
       }
    else {
        int tp = nzs(broitel,dr.broitel);
        dr2.broitel = tp;
        dr2.imenitel = (tp/broitel)*imenitel - (tp/dr.broitel)*dr.imenitel;
    }
        return dr2;
}
Dropki1 Dropki1::operator*(Dropki1 dr){
    Dropki1 dr2;
       dr2.imenitel = imenitel*dr.getImenitel();
       dr2.broitel = broitel*dr.getBroitel();
        return dr2;
}
Dropki1 Dropki1::operator/(Dropki1 dr){
    Dropki1 dr2;
      dr2.imenitel = imenitel*dr.getBroitel();
      dr2.broitel = broitel*dr.getImenitel();
        return dr2;
}


Dropki1 Dropki1::operator+(int i){
    Dropki1 dr2;
       dr2.broitel = broitel;
       dr2.imenitel = i*broitel + imenitel;

        return dr2;
}
Dropki1 Dropki1::operator-(int i){
    Dropki1 dr2;
       dr2.broitel = broitel;
       dr2.imenitel = i*broitel - imenitel;

        return dr2;
}
Dropki1 Dropki1::operator*(int i){
    Dropki1 dr2;
       dr2.broitel = broitel;
       dr2.imenitel = imenitel*i;

        return dr2;
}
Dropki1 Dropki1::operator/(int i){
    Dropki1 dr2;
       dr2.broitel = broitel*i;
       dr2.imenitel = imenitel;

        return dr2;
}

    int Dropki1::getImenitel (){
        return imenitel;
    }

    int Dropki1::getBroitel () {
        return broitel;
    }

    int Dropki1::nzd(int br1,int br2){
        int priv;


        while(1) {
            if (br2 == 0)
                return br1;
            int priv = br1%br2;
            br1 = br2;
            br2 = priv;

        }
    }

    int Dropki1::nzs(int br1, int br2){

    return (br1 / nzd(br1, br2)) * br2;

    }

    void Dropki1::reduiraj (int i, int b) {
        int br;
        br = nzd(i,b);
        imenitel = i / br;
        broitel  = b / br;

    }



    void Dropki1::pecatiDropka (Dropki1 dr){
        cout << dr.getImenitel() << "/" << dr.getBroitel() << endl;
    }
    void Dropki1::pecatiDecimalen(Dropki1 dr){
        cout << (double) imenitel / broitel << endl;
    }

