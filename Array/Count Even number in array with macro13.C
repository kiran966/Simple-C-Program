//program for Count of Even number in array
#include<stdio.h>
#include<conio.h>
#define Size 7

int main()
{
    int Arr[Size]={};
    int i=0,ECnt=0;

    printf("\n Enter Array Element => \n\n");

    //Accepting Array Element
    for(i=0;i<Size;i++)
    {
        printf("\n Enter Amount[%d]=",i+101);
        scanf("%d",&Arr[i]);
    }

    //Finding Array Count
    for(i=0;i<Size;i++)
    {
        if((Arr[i] % 2 == 0) && (Arr[i] != 0))
        {
            ECnt++;
        }
    }
    printf("\n\n Count of Even numbers in given array = %d.",ECnt);

    getch();
    return 0;
}
