//program for accept one dimensional array in addtion

#include<stdio.h>
#include<conio.h>
 int main()
 {
     int Val_A[5]={0},Val_B[5]={0},Sum[5]={0};
     int i=0;

     //Accepting Values of input array

     for(i=0;i<5;i++)
     {
         printf("\n Enter Array1[%d]=",i);
         scanf("%d",&Val_A[i]);
     }
      for(i=0;i<5;i++)
     {
         printf("\n Enter Array2[%d]=",i);
         scanf("%d",&Val_B[i]);
     }

     printf("\n======================================\n");

     for(i=0;i<5;i++)
     {
         Sum[i]=Val_A[i]+Val_B[i];
     }
      for(i=0;i<5;i++)
      {
          printf("\n Array1[%d] + Array2[%d] = Sum[%d] => %d + %d = %d.",i,i,i,Val_A[i],Val_B[i],Sum[i]);
      }

      getch();
      return 0;
 }
