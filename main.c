
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

//zadaca 8 
