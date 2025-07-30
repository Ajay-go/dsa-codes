#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class A{
    public:

    void add(int a,int b){ //function loading {same name but different paremeters}
        cout<<a+b<<endl;
    }
    void add(int a, int b,int c)
    {
        cout << a + b +c<< endl;
        
    }
};
// for overloading ,signature {parameter && name} should be diff , return type can be same

int main() {

    A a;
    a.add(5,10);
    a.add(5,10,10);
    return 0;
}