//program for Array
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int Emp[5] = {0};   //Var declaration with initialization

    printf("\n value of element 1 = %d",Emp[0]);   //printed/Access values of array element
    printf("\n value of element 2 = %d",Emp[1]);   //By Using array index
    printf("\n value of element 3 = %d",Emp[2]);   //with Desierd format specifier
    printf("\n value of element 4 = %d",Emp[3]);    //As Datatype of array
    printf("\n value of element 5 = %d",Emp[4]);

    Emp[0]=5;
    Emp[1]=25;                          //New values Assigned to array using index & assignment operator
    Emp[3]=55;
    Emp[4]=85;
    Emp[2] = Emp[3]+Emp[4];
    getch();

    printf("\n\n New value Assigned=> \n");

    printf("\n value of element 1 = %d",Emp[0]);
    printf("\n value of element 2 = %d",Emp[1]);
    printf("\n value of element 3 = %d",Emp[2]);
    printf("\n value of element 4 = %d",Emp[3]);
    printf("\n value of element 5 = %d",Emp[4]);

    getch();
    return 0;
 }
