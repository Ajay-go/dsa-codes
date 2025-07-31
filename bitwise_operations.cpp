#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap_with_bits(int &x,int &y){
    x = x^y;  
    y = x^y;  // y = (x^y)^y
    x = x^y;  // x = x^(x^y)
}
bool check_ith_bit(int x,int i){
    int rs = x>>(i); // 1000 becomes 1 after right shift by 3
    return (rs & 1) == 1;
}
void set_ith_bit(int &x,int i){
    int pos = 1<<i; // 1 becomes that number
    x = x|pos; // set that number
}
void clear_ith_bit(int x,int i){
    int pos = 1 << i;
    x = x & (~pos);
}

int main() {
    int x = 10;
    int y = 50;
    swap_with_bits(x,y);
    cout<<x<<" "<<y<<endl;
    cout<<check_ith_bit(8, 3)<<endl; // 0 based bits position
    x = 10;
    set_ith_bit(x,2);
    cout<<"after setting 2nd bit to 1 :"<<x<<endl; // it should be 14

        return 0;
}