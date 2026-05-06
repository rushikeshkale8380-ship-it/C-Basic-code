#include<iostream>
using namespace std;
class Arithematic    
{
    public:
    int no1,no2;    //Characteristics
    Arithematic()   //Default Constructor
    {
        no1=0; 
        no2=0;
    }
    Arithematic(int value1,int value2)  //Paramatrised Constructor
    {
        no1=value1;
        no2=value2;
    }
    int Addition()     //Addition Function
    {
        int ans=0;
        ans=no1+no2;
        return ans;
    }
    int Subtraction()    //Subtraction Function
    {
        int ans=0;
        ans=no1-no2;
        return ans;
    }
};
int main()
{
    Arithematic aobj(11,10);      //Create Object aobj of Arithematic Class
    int result=0;
    result=aobj.Addition();         //Call Addition Function
    cout<<"Addition is:"<<result<<"\n";

    result=aobj.Subtraction();       //Call Subtraction Function
    cout<<"Subtraction is:"<<result<<"\n";
    return 0;
}