#include <iostream>
using namespace std;

class human
{
private:
    string name;
    int age;
    string gender;

public:
    human(string name, int age, string gender)
    { // constructor
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    void display()
    {
        cout << "name :" << this->name << endl;
        cout << "age :" << this->age << endl;
        cout << "gender :" << this->gender << endl;
        cout << endl;
    }
};

class employee:public human{ // multilevel inheritance
    int emp_id;
    string company;

public:
    employee(string name,int age,string gender,int empid,string company):human(name,age,gender){
        this->emp_id = empid;
        this->company = company;
    }
};

int main()
{
    employee ajay("ajay", 21, "male",101,"amazon");
 

    ajay.display();
   
}