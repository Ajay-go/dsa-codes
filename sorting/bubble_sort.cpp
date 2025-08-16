#include <iostream>
#include <vector>
#include <algorithm>

// in bubble sort we iterate n for array 
// in each iteration we check adjacent elements and if they left element is greater than right element than we swap.
using namespace std;

int main() {

    vector<int>v = {5,2,1,0,-1,2};
    int n = v.size();
    for (int ele : v)cout << ele << " ";
    cout<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<n;j++){
            if(v[j-1] > v[j])swap(v[j-1],v[j]);
        }
    }

    for(int ele:v)cout<<ele<<" ";
    return 0;
}
/*
    tc. O(n2) worst, best ,average

    it can be optimised  by taking flag variable for swap 
    if no swap happen we will break;

    this is stable algorithm and inplace

*/