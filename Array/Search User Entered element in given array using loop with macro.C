//program for Search user Entered element in given Array loop with macro
#include<stdio.h>
#include<conio.h>
#define Size 7
 int main()
 {
     int Arr[Size]={};
     int i=0,Loc=-1,Ele=0;

     printf("\n Enter array Element => \n\n");

     //Accepting Array Elemenet
     for(i=0;i<Size;i++)
     {
         printf("\n Enter Amount [%d]=",i+101);
         scanf("%d",&Arr[i]);
     }
     printf("\n Enter Element to be Searched =");
     scanf("%d",&Ele);

     //Finding Location of Element
     for(i=0;i<Size;i++)
     {
         if(Arr[i] == Ele)
         {
             Loc=i+1;
             break;
         }
     }
     if(Loc == -1)
     {
         printf("\n Number Not Found");

     }
     else
     {
         printf("\n\n Number first Occurrence Found in Array At Location = %d",Loc);
     }
     getch();
     return 0;
 }
