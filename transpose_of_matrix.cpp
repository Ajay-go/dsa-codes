#include<iostream>
using namespace std;

main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};

       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
            }cout<<endl;
}

    cout<<"Transpose is"<<endl;

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
            }cout<<endl;
}
}