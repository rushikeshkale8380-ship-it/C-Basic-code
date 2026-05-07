#include<iostream>
using namespace std;
class First    //It is Class Creation
{
    public:
    int Addition(int a,int b)   //Addition Fuction they are pass Two integer and return Sum 
    {
        return a+b;
    }

    int Addition(int a,int b,int c)  //Addition Funtion they are pass Three integer and return sum
    {
        return a+b+c;
    }

    int Addition(int a,int b,int c,int d)  //Addition Funtio they are pass Four integer and return sum
    {
        return a+b+c+d;
    }
};

int main()
{
    First fobj;              //Create Object of First class
    cout<<fobj.Addition(12,12)<<"\n";   //It is Call Addition function they returns Tow integer sum
    cout<<fobj.Addition(11,22,33)<<"\n";  //It is Call Addition function they returns Three integer Sum
    cout<<fobj.Addition(11,22,33,44)<<"\n";  //It is call Addition function they returns four integer sum

    return 0;

}
