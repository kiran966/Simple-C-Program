//program for minimum values in array loop
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,Min=0,iArr[10]={65,25,45,5,47,98,54,2,78,96};

     /* Accept Array Element from User
     for(i=0;i<10;i++)
     {
        printf("\n Enter No %d:",i+1);
        scanf("%d",&iArr[i]);
     }*/
     Min=iArr[0];

     for(i=1;i<10;i++)
     {
         if(Min>iArr[i])
         {
             Min=iArr[i];
         }
     }
     printf("\n======================================================\n");

     printf("\n Minimum from given is = %d",Min);

     printf("\n======================================================\n");

     getch();
     return 0;
 }
