//program for Array using loop
#include<stdio.h>
#include<conio.h>
#define cnt 16
 int main()
 {
     int Arr[cnt]={25};
     int i=0;

     //Display Array Elements

     for(i=0;i<=cnt;i++)
     {
         printf("\n Value of RollNo %d = %d.",i+101,Arr[i]);
     }

     getch();

     //system("cls");

     printf("\n Enter Array Element => \n\n");

     //Accepting Array Element
     for(i=0;i<=cnt;i++)
     {
         printf("\n Enter Element[%d]=",i+101);
         scanf("%d",&Arr[i]);
     }

     //Displaying New Array Element
     for(i=0;i<=cnt;i++)
     {
         printf("\n Value of RollNo %d = %d.",i+501,Arr[i]);
     }

     printf("\n\n Press any key to continue...");

     getch();
     return 0;
 }
