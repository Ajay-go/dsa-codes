#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

using namespace std;

class A
{
public:
    virtual void add(int a, int b) = 0; // Pure virtual function
};

class B : public A
{
public:
    void add(int a, int b) override
    {
        cout << a + b << endl;
    }
};

int main()
{
    try
    {
        //A obj1; // Uncommenting this will cause a compile-time error
        throw runtime_error("Cannot create object of abstract class A");
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }

    B obj;
    obj.add(10, 5);

    int x = 10;
    int *ad = &x;

    cout << "Address: " << ad << endl;
    cout << "Value: " << *ad << endl;

    return 0;
}
