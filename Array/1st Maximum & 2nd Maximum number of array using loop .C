//program for 1st maximum and 2nd maximum array using loop
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,Max=0,S_Max=0,iArr[10]={65,25,45,2,87,4,65,43,33,20};

     /* Accept array element form user
     for(i=0;i<10;i++)
     {
       printf("\n Enter No %d:",i+1);
       scanf("%d",&iArr[i]);
     }*/

     Max=iArr[0];

     for(i=0;i<10;i++)
     {
         if(iArr[i]>Max)
         {
             Max=iArr[i];
         }
     }

     S_Max=iArr[0];

     for(i=1;i<10;i++)
     {
         if(iArr[i]==Max)
         {
             continue;
         }
         else if(iArr[i]==S_Max)
         {
             S_Max=iArr[i];
         }
     }
     printf("\n=======================================\n");

     printf("\n 1st Maximum from given array is = %d.",Max);
     printf("\n 2nd Maximum from given Array is = %d.",S_Max);

     printf("\n=======================================\n");

     getch();
     return 0;
 }
