#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int>v = {-1,0,2,7,-5};
    int n = v.size();

    for(int i =1;i<n;i++){
        int curr = v[i];

        int j = i-1;
        while(j >= 0 && v[j] > curr){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = curr;
        
    }
    for(int ele:v)cout<<ele<<" ";
    return 0;
}