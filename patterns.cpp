#include <iostream>
using namespace std; // space
//          *             //0       4
//       * * *        //1          3
//      * * * * *        //2         2
//   * * * * * * *     //3         1
//  * * * * * * * * *  //n = 4;     0
int main()
{
    int n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int space = n - i - 1;
    //     int stars = 2 * i + 1;

    //     for (int j = 0; j < space; j++)
    //         cout << " ";
    //     for (int j = 0; j < stars; j++)
    //         cout << "*";

    //     cout << endl;
    // }
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     int space = n - i - 1;
    //     int stars = 2 * i + 1;

    //     for (int j = 0; j < space; j++)
    //         cout << " ";
    //     for (int j = 0; j < stars; j++)
    //         cout << "*";

    //     cout << endl;
    // }



    // * * * *  0
    // *     *  1
    // *     *  2
    // * * * *  3
    // 0 1 2 3


    // for(int i = 0;i<n;i++){
    //     if(i == 0 || i == n-1){
    //         for(int j = 0;j<n;j++)cout<<"*";
    //     }
    //     else{
    //         for (int j = 0; j < n; j++){
    //             if(j == 0 || j == n-1)cout<<"*";
    //             else cout<<" ";
    //         }
                
    //     }
    //     cout<<endl;

    // }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<n;j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}