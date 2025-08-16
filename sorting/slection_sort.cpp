#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
    in this algorithm ,we have to select minimum element from array and put it in sorted arrayy from starting

    tc -> best,worst,average is O(n2)
    inplace algorithm
    not stable 
    
*/
int main() {
    vector<int> v = {5, 2, 1, 0, -1, 2};
    int n = v.size();
    for (int ele : v)cout << ele << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
       int mn = v[i];
       int mnidx = i;
       for(int j = i;j<n;j++){
            if(v[j] < mn){
                mn = v[j];
                mnidx = j;
            }
       }
       swap(v[i],v[mnidx]);
    }

    for (int ele : v)
        cout << ele << " ";
    return 0;

    return 0;
}