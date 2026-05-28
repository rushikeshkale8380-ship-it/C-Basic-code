#include<stdbool.h>
#include<stdio.h>

bool CheckEvenOdd(int iNo)
{
    int iRemainder=0;

    iRemainder=iNo%2;
    
    if (iRemainder==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;


    printf("Enter Number to Check Wheather it is Even or Odd: ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }

    return 0;
}
