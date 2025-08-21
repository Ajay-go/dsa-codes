#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
it is range based sorting ,elements should be continuos and in particular range
tc is O(n)
extra space is O[1]
inplace and stable beacuse duplicates are not allowed
*/
int main() {

    vector<int>v = {1,2,5,4,3};
    int n = v.size();
    int i = 0;

    while(i < n){
        int curr_ele = v[i];
        int correct_pos = curr_ele-1;

        if(correct_pos == i){
            i++;
            continue;
        }
        else {
            swap(v[correct_pos],v[i]);
        }
    }
    for(int ele:v)cout<<ele<<" ";
    return 0;
}