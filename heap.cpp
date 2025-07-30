#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class minheap{
        vector<int>v;
    public:
        void display(){
            for(int ele:v)cout<<ele<<" ";
            cout<<endl;
        }
        bool isempty(){
            return v.size() == 0;
        }
        void insert(int val){
            v.push_back(val);
            heapify();
        }
        void  heapify(){
            int idx = v.size()-1;

            int parent_idx = (idx-1)/2;

            while(parent_idx >= 0 && v[parent_idx] > v[idx]){
                swap(v[parent_idx] , v[idx]);
                idx = parent_idx;
                parent_idx = (idx-1)/2;
            }

        }
        void top(){
            
        }
};
int main() {
    minheap hp;
    hp.insert(100);
    hp.insert(10);
    hp.insert(20);
    hp.insert(1);
    hp.insert(50);
    hp.insert(2);
    hp.display();
    return 0;
}