// program for array
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int Arr[5];        //Var declaration without intialization
                        //value will br Garbage

      printf("\n Garbage As Unintialized => \n");
      printf("\n value of element 1 = %d",Arr[0]);
      printf("\n value of element 2 = %d",Arr[1]);
      printf("\n value of element 3 = %d",Arr[2]);
      printf("\n value of element 4 = %d",Arr[3]);
      printf("\n value of element 5 = %d",Arr[4]);

      Arr[0]=5;
      Arr[1]=25;
      Arr[2]=55;
      Arr[3]=45;
      Arr[4]=70;
      getch();

      printf("\n New value Assigend=> \n");
      printf("\n value of element 1 = %d",Arr[0]);
      printf("\n value of element 2 = %d",Arr[1]);
      printf("\n value of element 3 = d",Arr[2]);
      printf("\n value of element 4 = %d",Arr[3]);
      printf("\n value of element 5 = %d",Arr[4]);

      getch();
      return 0;

 }
