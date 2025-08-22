#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Overloading + to work as subtraction
    Number operator+(const Number &obj)
    {
        return Number(value - obj.value);
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Number n1(10), n2(4);

    Number n3 = n1 + n2; // actually does 10 - 4
    n3.display();        // Output: 6
}
