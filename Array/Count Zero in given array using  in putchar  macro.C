//program for count of zero in given array using loop with macro
#include<stdio.h>
#include<conio.h>
#define Size 7
  int main()
  {
      int Arr[Size]= {};
      int i=0,Count=0;

      printf("\n Enter Array of element => \n\n");

      //Accepting array element
      for(i=0;i<Size;i++)
      {
          printf("\n Enter Amount[%d]=",i+101);
          scanf("%d",&Arr[i]);
      }

      //Finding Count of zero

      for(i=0;i<Size;i++)
      {
          if(Arr[i]==0)
          {
              Count++;
              putchar('Y');
              getch();
          }
          putchar('N');
          getch();
      }
      printf("\n\n Count of Zero in given Array = %d",Count);

      getch();
      return 0;
  }

