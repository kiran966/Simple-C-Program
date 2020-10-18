//program for 2D Arrar addtion
#include<stdio.h>
#include<conio.h>

 int main()
 {
     int row=0,col=0;
     int Arr1[2][4]={{0},{0}},Arr2[2][4]={{0},{0}},Sum[2][4]={{0},{0}};

     //Accepting 1st - 2D array

     for(row=0;row<2;row++)
     {
         for(col=0;col<4;col++)
         {
             printf("\n Enter Element [%d][%d]=",row,col);
             scanf("%d",&Arr1[row][col]);
         }
     }

     printf("\n=======================================================\n");
     //Accepting 2nd -2nd array

     for(row=0;row<2;row++)
     {
         for(col=0;col<4;col++)
         {
             printf("\n Enter Element [%d][%d]=",row,col);
             scanf("%d",&Arr2[row][col]);
         }
     }
     printf("\n=======================================================\n");
     //Accepting 2nd -2nd array

     for(row=0;row<2;row++)
     {
         for(col=0;col<4;col++)
         {
             Sum[row][col]=Arr1[row][col] + Arr2[row][col];
         }
     }
     //sysetm("cls");

     //Display Accepted 2D array with their sum

     printf("\n Arr1 + Arr2 = Sum");
     for(row=0;row<2;row++)
     {
         for(col=0;col<4;col++)
         {
             printf("\n %d + %d = %d", Arr1[row][col],Arr2[row][col],Sum[row][col]);
         }
     }
     getch();
     return 0;
 }
