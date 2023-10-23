#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseEle(queue<int>& a,int k){
  

    int n=a.size();
    int arr[n];

    for(int i=0;i<n;i++){
        int c=a.front();
        arr[i]=c;
        a.pop();
    }

    int i=0;
    int j=k-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        a.push(arr[i]);
    }
}


void displayit(queue<int> a){
    while(!a.empty()){
        cout<<a.front();
        a.pop();
    }
} 

main(){
    queue<int> ques;
    ques.push(1);
    ques.push(2);
    ques.push(3);
    ques.push(4);
    ques.push(5);

    reverseEle(ques,3);
    displayit(ques);


}

