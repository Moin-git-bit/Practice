// sum digit in given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,dig = 0,dsum = 0,temp = 0;

    printf("\n enter a positive = ");
    scanf("%d",&no);

    temp = no;

    while(temp > 0)
    {
        dig = temp % 10;

        dsum = dsum + dig;

        temp = temp / 10;
    }

    printf("\n sum of digit in %d is = %d",no,dsum);
    printf("\n thanks for using my program. ");

    getch();
    return 0;

}
