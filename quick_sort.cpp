#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>&v,int si,int ei){
    int pivotele = v[si];

    int cnt = 0;

    for(int i = si+1;i<=ei;i++){
        if(v[i] <= pivotele)cnt++;
    }
    int pivot = cnt + si;

    swap(v[si],v[pivot]);

    int i = si;
    int j = ei;

    while(i < pivot && j > pivot){
        if(v[i] <= pivotele)i++;
        if(v[j] > pivotele)j--;
        else {
            if(v[i] > pivotele && v[j] <= pivotele){
                swap(v[i],v[j]);
                i++;
                j--;
            }
        }
    }
    return pivot;

}
void quick_sort(vector<int>&v,int lo,int hi){
    if(lo >= hi)return;
    int pivot = partition(v,lo,hi);

    quick_sort(v,lo,pivot-1);
    quick_sort(v,pivot+1,hi);
}
int main() {
    vector<int>v = {1,5,4,2,9,-1,-1};
    int n = v.size();
    quick_sort(v,0,n-1);
    for(int ele:v)cout<<ele<<" ";
    return 0;
}