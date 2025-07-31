#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int start_sem ,endsem;
    cout<<"starting semester eg(2)"<<endl;
    cin>>start_sem;
    cout<<"ending semester eg(3)"<<endl;
    cin>>endsem;
    double sgpa_total = 0;
    double total_credits = 0;
    vector<double>credits = {19,19,22,20,23,22};
    for(int i = start_sem-1;i<endsem;i++){
        double curr_sgpa = 0;
        cout<<"enter sem "<<i+1<<" sgpa"<<endl;
        cin>>curr_sgpa;

        sgpa_total += (curr_sgpa*credits[i]);
        total_credits += credits[i];

    }
    cout<<"your cgpa from "<<start_sem<<" sem to "<< endsem<<" sem is "<<sgpa_total/total_credits<<endl;
    return 0;
}