#include<stdio.h>
#include<conio.h>
 int main()
 {
     int Arr[5]={};

     printf("\n Values of 0 Element = %d.",Arr[0]);
     printf("\n Values of 1 Element = %d.",Arr[1]);
     printf("\n Values of 2 Element = %d.",Arr[2]);
     printf("\n Values of 3 Element = %d.",Arr[3]);
     printf("\n Values of 4 Element = %d.",Arr[4]);

     getch();

     printf("\n Enter Array Element => \n\n");

     printf("\n Enter Element[0] =");
     scanf("%d",&Arr[0]);
     printf("\n Enter Element[1] =");
     scanf("%d",&Arr[1]);
     printf("\n Enter Element[2] =");
     scanf("%d",&Arr[2]);
     printf("\n Enter Element[3] =");
     scanf("%d",&Arr[3]);
     printf("\n Enter Element[4] =");
     scanf("%d",&Arr[4]);

     printf("\n Values of 0 Element = %d.",Arr[0]);
     printf("\n Values of 1 Element = %d.",Arr[1]);
     printf("\n Values of 2 Element = %d.",Arr[2]);
     printf("\n Values of 3 Element = %d.",Arr[3]);
     printf("\n Values of 4 Element = %d.",Arr[4]);

     printf("\n\n Press any key to continue...");

     getch();
     return 0;
 }
