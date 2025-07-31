#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int arr[5] = {1,10,2,3,5};

    cout<<arr<<endl;//starting address of arr

    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" "<<(*(arr+i))<<endl; // arr[i] is equal to (*(arr+i)) internaly
    }
    
    return 0;
}