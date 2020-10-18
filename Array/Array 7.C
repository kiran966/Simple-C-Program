//program for Accepting array
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int Arr[5]={};

     printf("\n Values of 10 Element = %d.",Arr[0]);
     printf("\n Values of 11 Element = %d.",Arr[1]);
     printf("\n Values of 12 Element = %d.",Arr[2]);
     printf("\n Values of 13 Element = %d.",Arr[3]);
     printf("\n Values of 14 Element = %d.",Arr[4]);

     getch();

     system("cls");

      printf("\n Enter Array Element => \n\n");

     printf("\n Enter Element[1] =");
     scanf("%d",&Arr[0]);
     printf("\n Enter Element[2] =");
     scanf("%d",&Arr[1]);
     printf("\n Enter Element[3] =");
     scanf("%d",&Arr[2]);
     printf("\n Enter Element[4] =");
     scanf("%d",&Arr[3]);
     printf("\n Enter Element[5] =");
     scanf("%d",&Arr[4]);
     printf("\n Enter Element[6] =");
     scanf("%d",&Arr[5]);


     return 0;

 }
