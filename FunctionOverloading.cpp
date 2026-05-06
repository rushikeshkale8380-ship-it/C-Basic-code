#include<iostream>
using namespace std;
class hello
{
    public:
    int addition(int a,int b)
    {
        return a+b;
    }
    int additionthree(int a,int b,int c)
    {
        return a+b+c;
    }
    int additionfour(int a,int b,int c,int d)
    {
        return a+b+c+d;
    }
};
    
    int main()
    {
        hello hobj;
        cout<<hobj.addition(10,11)<<"\n";
        cout<<hobj.additionthree(10,11,22)<<"\n";
        cout<<hobj.additionfour(10,11,22,33)<<"\n";

        return 0;
    }