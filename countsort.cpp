#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    cout<<"Ajay Gour  0901AM221006 "<<endl;
    vector<int> v = {1, 0, 8, 4, 7, 5, 6, 10};
    int size = v.size();
    int ans[size];
    int max = INT_MIN; 
    for (int i = 0; i < size; i++) {
        if (v[i] > max) max = v[i];
    } 
    vector<int> freq(max + 1, 0);
    vector<int>a;

    // frequency ++
    for (int i = 0; i < size; i++) {
        freq[v[i]]++;
    }
   // commutative sum
    for (int i = 1; i <= max; i++) {
        freq[i]+=freq[i-1];
    }
    for (int i = 0; i <=max; i++) {
        cout<<freq[i]<<" ";
    }
    // shift by one position
    a.push_back(0);
    int k=freq.size()-1;
    
    for (int i =0;i<k;i++) {
        a.push_back(freq[i]);

    // sorting

    for(int i=0;i<size;i++){
        ans[a[v[i]]]=v[i];
        a[v[i]]++;
    }
    cout<<endl;

    for (int i = 0; i <size; i++) {
        cout<<ans[i]<<" ";
    } 
    } 
    return 0;
}
