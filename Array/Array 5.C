#include<stdio.h>
#include<conio.h>
 int main()
 {
     int iNum[5]={10,55,88,15,3};

    printf("\n Values of 101 element  = %d",iNum[0]);
    printf("\n Values of 102 element  = %d",iNum[1]);
    printf("\n Values of 103 element  = %d",iNum[2]);
    printf("\n Values of 104 element  = %d",iNum[3]);
    printf("\n Values of 105 element  = %d",iNum[4]);

    getch();

    iNum[3] = 105;        //  105

    iNum[4] = iNum[0];     // 10

    iNum[0]++;              // 11

    iNum[2]+=5;   // iNum[2] = iNum[2] + 5;  //93

    printf("\n=========================================\n");

    printf("\n Values of 401 element  = %d",iNum[0]);  //11
    printf("\n Values of 402 element  = %d",iNum[1]);   //55
    printf("\n Values of 403 element  = %d",iNum[2]);   //93
    printf("\n Values of 404 element  = %d",iNum[3]);   //105
    printf("\n Values of 405 element  = %d",iNum[4]);    //10

    printf("\n\n Press any key to continue...");
    getch();
    return 0;

 }
