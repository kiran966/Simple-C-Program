//program for Accepting 2-D array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
 {
     int row=0,col=0;
     int Arr[3][3]={{0},{0},{0}};

     //Accept 2D Array
     for(row=0;row<3;row++)
     {
         for(col=0;col<3;col++)
         {
             printf("\n Enter Element[%d][%d]=",row,col);
             scanf("%d",&Arr[row][col]);
         }
     }
     system("cls");
     //Display Accepting 2Darray
     for(row=0;row<3;row++)
     {
         printf("\n\n==========*****====================\n");
         printf("\t Row %d Element are => \n",row+1);
         for(col=0;col<3;col++)
         {
             printf("\n Value of Element[%d][%d]=%d",row+1,col+1,Arr[row][col]);

         }
     }
     getch();
     return 0;

 }
