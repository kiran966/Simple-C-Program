//program for Odd number in array loop in macro
#include<stdio.h>
#include<conio.h>
#define Size 7
 int main()
 {
     int Arr[Size]={};
     int i=0,OCnt=0;

     printf("\n Enter element =>\n\n");

     //Accepting array element
     for(i=0;i<Size;i++)
     {
         printf("\n Enter Amount[%d]",i+101);
         scanf("%d",&Arr[i]);
     }

     //finding Odd number count

     for(i=0;i<Size;i++)
     {
         if(Arr[i]%2!=0)
         {
             OCnt++;
         }
     }
     printf("\n\n Count of Even number in Given Array=%d",OCnt);

     getch();
     return 0;
 }
