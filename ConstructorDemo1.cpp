#include<iostream>
using namespace std;
class Special
{
    public:
    int no1,no2,Result;    //Characteristics

    Special()    //Constructor
    {
        cout<<"Inside the Default Constructor\n";
        no1=0;
        no2=0;
    }

    Special(int a,int  b)     //Paramatrised Constructor
    {
        cout<<"Inside Paramatrised Constructor\n";
        no1=a;
        no2=b;
    }

    Special(Special&ref)     //Copy Constructor
    {
        cout<<"Inside Copy Constructor\n";
        no1=ref.no1;
        no2=ref.no2;
    }
    ~Special()    //Distructor
    {
        cout<<"Inside Distructor\n";
    }
};

int main()
{
    cout<<"Inside Main\n";
    Special Sobj1;      //Object of class Special
    Special Sobj2(11,22);   //Call Paramatrised Constructor
    Special Sobj3(Sobj2);   //Call Copy Constructor
    cout<<"End of the main\n";
    return 0;
}
