#include<iostream>
using namespace std;

int main(){
    //2d array

    int array[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }

    return 0;
}