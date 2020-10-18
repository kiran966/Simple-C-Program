//program of 2-D Array in loop
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,Arr[3][5]={{11,12,13,14,15},{22,33,44,55,66}};

     for(i=0;i<3;i++)
     {
         printf("\n\n\t Row %d Element are => \n",i);


       for(j=0;j<5;j++)
        {
         printf("\n values of %d%d Element = %d.",i,j,Arr[i][j]);
        }
    }

     getch();
     return 0;
 }
