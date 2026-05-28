#include<stdio.h>                      
int Divide(int iNo1,int iNo2)               //Function Get Two Number And Give the Division
{
    int iAns=0;
    if(iNo2==0)
    {
        return-1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}
    int main()
    {
        int iValue1=15;                   
        int iValue2=5;         
        int iRet=0;

        iRet=Divide(iValue1,iValue2);    //Function call

        printf("Division is %d",iRet);   //Division Show On Console 
        return 0;
    }
