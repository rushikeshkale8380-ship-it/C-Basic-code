#include<iostream>
using namespace std;
class Demo
{
    public:                 //no write the acces specifire they are by default gets private
         int i;              //characteristics
         float f;              //characteristics
         
         Demo()                   //constructor
         {
            cout<<"inside constructor";
            i=0;
            f=0.0f;
         }
         ~Demo()                 //distructor
         {
            cout<<"Inside distructor\n";
         }

         void fun()             //Behavior        
         {
            cout<<"inside fun\n";       
         }
};

int main()
{
    cout<<"Inside main\n";
    Demo dobj;                //object creation

   cout<<"\n"<<dobj.i<<"\n";
    dobj.fun();
    cout<<"End of Main\n";

    return 0;
}