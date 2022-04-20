
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


}
// zadaca2 // 
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
}

