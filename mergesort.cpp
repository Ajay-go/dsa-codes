#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void merge(vector<int>&a,int lo,int mid,int hi){
    vector<int>temp ;
    int i = lo;
    int j = mid+1;

    while(i <= mid && j <= hi){
        if(a[i] < a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else {
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(a[i]);
        i++;
    }
    while (j <= hi)
    {
        temp.push_back(a[j]);
        j++;
    }
    for(int k = lo;k<=hi;k++){
        a[k] = temp[k-lo];
    }
}
void mergesort(vector<int>&v,int lo,int hi){
    if(lo == hi)return;
    int mid = lo + (hi - lo)/2;
    mergesort(v,0,mid);
    mergesort(v,mid+1,hi);

    merge(v,lo,mid,hi);



}
int main() {
    
    vector<int>v = {3,21,1,5,4,6};
    mergesort(v,0,5);
    for(int ele:v)cout<<ele<<" ";
    
    return 0;
}