#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class A
{
public:
    virtual void add(int a, int b)
    { 
        cout << a + b << endl;
        cout << "base class function called";
    }
    
};
class b : public A{
    public:
    void add(int a, int b)
    { 
        cout << a + b << endl;
        cout<<"child class function called";

    }
};

int main()
{

    A* obj = new b;
    obj->add(5, 10); // late bindin with help of virtual
    cout<<endl;
    b obj2;
    obj2.add(5,10); //early binding
    cout<<endl;

    A obj3;
    obj3.add(5,10); //early binding
    
    return 0;
}