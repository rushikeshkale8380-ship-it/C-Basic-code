#include<iostream>
using namespace std;
class Special
{
    public:
    int no1,no2,Result;

    Special()
    {
        cout<<"Inside the Default Constructor\n";
        no1=0;
        no2=0;
    }

    Special(int a,int  b)
    {
        cout<<"Inside Paramatrised Constructor\n";
        no1=a;
        no2=b;
    }

    Special(Special&ref)
    {
        cout<<"Inside Copy Constructor\n";
        no1=ref.no1;
        no2=ref.no2;
    }
    ~Special()
    {
        cout<<"Inside Distructor\n";
    }
};

int main()
{
    cout<<"Inside Main\n";
    Special Sobj1;
    Special Sobj2(11,22);
    Special Sobj3(Sobj2);
    cout<<"End of the main\n";
    return 0;
}