#include<iostream>
#include<vector>
using namespace std;

main(){
    vector<int>height;
    height.push_back(1);
    height.push_back(5);
    height.push_back(2);
    height.push_back(0);
    height.push_back(3);
    height.push_back(1);
    height.push_back(2);
int n=height.size();
   
    int prev[n];
    int next[n];
int max=-1;
for(int i=0;i<n;i++){
    prev[i]=max;
    if(max<height[i])max=height[i];

}int max2=-1;
for(int i=n-1;i>=0;i--){
    next[i]=max2;
    if(max2<height[i])max2=height[i];

}
int water =0;
for(int i=1;i<n;i++){
    if(height[i]<min(next[i],prev[i])){
    water+=min(prev[i],next[i])-height[i];

    }
}
cout<<water;
}