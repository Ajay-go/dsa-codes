#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
    two array are given ,vote_casted , age_of_candidate

    find candidate who won 
    if tie print -1

*/
int main() {
    
    int votes_casted_to[] = {1,1,2,3,4,1,1,2,2,2,4,5};
    int age_of_candi[] = {10,19,20,21,2,34,56,89,9,10,1,2};

    int len = sizeof(votes_casted_to)/sizeof(votes_casted_to[0]);

    unordered_map<int,int>mp;

    for(int i = 0;i<len;i++){
        if(age_of_candi[i] >= 18){
            mp[votes_casted_to[i]]++;
        }
    }
    int candi = -1;
    int votes = 0;

    for(auto ele:mp){
        if(ele.second > votes){
            candi = ele.first;
            votes = ele.second;
        }
    }
    int cnt  = 0;
    for(auto ele:mp){
        if(ele.second == votes)cnt++;
    }
    if(cnt >= 2){
        cout<<"-1";
    }
    else cout<<candi;

    cout<<endl;

    
    return 0;
}