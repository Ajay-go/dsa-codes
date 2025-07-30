#include<iostream>
using namespace std;

class human{
    private :
        string name;
        int age ;
        string gender;
    
    public:

    human(string name,int age,string gender){ // constructor
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    void display(){
        cout<<"name :"<<this->name<<endl;
        cout << "age :" << this->age << endl;
        cout << "gender :" << this->gender << endl;
        cout<<endl;
    }
};

int main(){
    human ajay("ajay",21,"male");
    human xyz ("xyz",19,"female");

    ajay.display();
    xyz.display();


}