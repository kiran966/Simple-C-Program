#include<stdio.h>
#include<conio.h>
#define Size 7
 int main()
 {
     int Arr[Size]={};
     int i=0,ZCnt=0,ECnt=0,OCnt=0;

     printf("\n Enter ayyar element => \n\n");

     //Accepting  Array element
     for(i=0;i<Size;i++)
     {
         printf("\n Enter Amount of [%d] = ",i+101);
         scanf("%d",&Arr[i]);
     }

     //finding elelment of Zero,Even,Odd element
     for(i=0;i<Size;i++)
     {
         if(Arr[i] == 0)
         {
             ZCnt++;
         }
         else if(Arr[i] % 2 == 0)
         {
             ECnt++;
         }
         else
         {
             OCnt++;
         }
     }
     printf("\n Count of Even number in given array = %d",ECnt);
     printf("\n Count of Odd number in given array = %d",OCnt);
     printf("\n Count of Zero number in given array = %d",ZCnt);

     getch();
     return 0;
 }
