#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class A{
public:
    virtual void add(int a,int b)=0;//purely virutal function then this is abstract class 
};
class B:public A{
    public:
    void add(int a,int b) override {
        cout<<a+b;
    }
};
int main() {
    //A obj1  this will give error as we cannot make object of abstract classes(A)
    B obj;
    obj.add(10,5);
    int x = 10;
    int *ad;
   
    ad = &x;
    cout<<ad;
    cout<<endl;
    cout<<*ad;

    
    return 0;
}