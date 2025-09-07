
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number  ";
    cin >> n;

    // Upper half
    for(int i=1;i<=n;i++){

        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--){

        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=1; j<= 2*i-1 ;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = i; j < n; j++) {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= (2 * i - 1); j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Lower half
    // for (int i = n - 1; i >= 1; i--) {
    //     for (int j = n; j > i; j--) {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= (2 * i - 1); j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}