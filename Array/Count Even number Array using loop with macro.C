//program for Even number using Array loop with macro
#include<stdio.h>
#include<conio.h>
#define Size 7

int main()
{
    int Arr[Size]={};
    int i=0,ECnt=0;

    printf("\n Enter Array of element =>\n\n");

    //Accepting Array Element
    for(i=0;i<Size;i++)
    {
        printf("\n Enter Amount[%d]=",i+101);
        scanf("%d",&Arr[i]);
    }

    //Finding Even Count
    for(i=0;i<Size;i++)
    {
        if(Arr[i]==0)
        {
            printf("\n Continued..");
            continue;

            printf("\n HELLO BCS.....");
        }
        if(Arr[i] % 2 == 0)
        {
            ECnt++;
            printf("\n Count Increased");
        }
        printf("\n Yes");
        getch();
    }
    printf("\n\n Count of EVEN number in given Array = %d.",ECnt);

    getch();
    return 0;
}
