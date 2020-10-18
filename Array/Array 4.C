#include<stdio.h>
#include<conio.h>
 int main()
 {

    int Emp[5]={7,21};

    printf("\n Intialized values => \n");
    printf("\n Values of element 1 = %d",Emp[0]);
    printf("\n Values of element 2 = %d",Emp[1]);
    printf("\n Values of element 3 = %d",Emp[2]);
    printf("\n Values of element 4 = %d",Emp[3]);
    printf("\n Values of element 5 = %d",Emp[4]);

    Emp[0]=5;
    Emp[1]=100;
    Emp[3]=45;
    Emp[4]=50;
    Emp[2]=Emp[3]+Emp[4];
    getch();

    printf("\n\n New Values Assigined => \n");

    printf("\n Values of element 1 = %d",Emp[0]);
    printf("\n Values of element 2 = %d",Emp[1]);
    printf("\n Values of element 3 = %d",Emp[2]);
    printf("\n Values of element 4 = %d",Emp[3]);
    printf("\n Values of element 5 = %d",Emp[4]);

    getch();
    return 0;

 }
