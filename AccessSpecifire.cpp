#include<iostream>
using namespace std;

class Demo
{
    public:    
    int i;
    private:
    int j;
    protected:
    int k;
    
    public:
    Demo()   //Constructor
    {
        i=0;
        j=0;
        k=0;
    }

    void Display()
    {
        cout<<"Value of i:"<<i<<"\n";
        cout<<"Value of j:"<<j<<"\n";
        cout<<"Value of k:"<<k<<"\n";
    }
};

int main()
{
    Demo dobj;
    dobj.Display();

    cout<<"Value of i:"<<dobj.i<<"\n";
    // cout<<"Value of j:"<<dobj.j<<"\n";   //Not Allowed (it is private not Accesable outside the class)
   // cout<<"Value of k:"<<dobj.k<<"\n";   //Not Allowed (it is protected not Accessable outside the class)

    return 0;
}

