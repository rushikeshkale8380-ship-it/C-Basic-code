#include<iostream>
using namespace std;
    void display()    //Function they Difference between of auto and Static Storage class
    {
    int i=10;       //It is auto sotrage class they stored in stack section
    static int j=10;   //It is Static storage class they stored in data section
    i++;
    j++;
    cout<<"i="<<i<<"j="<<j<<"\n";
    }
    int main()
    {

    display();   
    display();
    display();
    
   return 0;
}

/*OUTPUT:
i=11j=11
i=11j=12
i=11j=13

Explain:

Why the value i is not changes
They are Auto storage class then 
1st Call:first call they are consider i=10 and  i++ and then print 11 
2nd Call:Second call they are consider i=10 and  i++ and then print 11
3rd call:Same step repeat

But j is Static Storage class They are Stored in Data section
1st Call:first call they are consider j=10 and j++ then print 11
2nd Call:Second call they are consider j=11 and j++ then print 12
3rd Call:Third call they are Consider j=12 and j++ then print 13

But the difference i is destroyed after Fuction call and j are stored
*/