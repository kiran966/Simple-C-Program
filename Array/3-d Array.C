//program for three array
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int Arr[3][5]={{11,12,13,14,15},{77,88,99,111},{23,33,43}};

     printf("\n\t Row 0 Element are => \n");

     printf("\n\t Value of 00 Element = %d.",Arr[0][0]);
     printf("\n\t Value of 01 Element = %d.",Arr[0][1]);
     printf("\n\t Value of 02 Element = %d.",Arr[0][2]);
     printf("\n\t Value of 03 Element = %d.",Arr[0][3]);
     printf("\n\t Value of 04 Element = %d.",Arr[0][4]);

     printf("\n\t Row 10 Element = %d.",Arr[1][0]);
     printf("\n\t Row 11 Element = %d.",Arr[1][1]);
     printf("\n\t Row 12 Element = %d.",Arr[1][2]);
     printf("\n\t Row 13 Element = %d.",Arr[1][3]);
     printf("\n\t Row 14 Element = %d.",Arr[1][4]);

     printf("\n\n\t Row 20 Element = %d.",Arr[2][0]);
     printf("\n\n\t Row 21 Element = %d.",Arr[2][1]);
     printf("\n\n\t Row 22 Element = %d.",Arr[2][2]);
     printf("\n\n\t Row 23 Element = %d.",Arr[2][3]);
     printf("\n\n\t Row 24 Element = %d.",Arr[2][4]);

     getch();

 }
