#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*

*   *
 * *
  * 
 * *
*   *  

for n = 5

*/
int main() {

    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == j || j+i+1 == n)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}