#include <iostream>
using namespace std;

void print1(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // * * * *
    // * * * *
    // * * * *
    // * * * *
}



void print2(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

// * 
// * * 
// * * * 
// * * * * 
}


void print3(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

// 1 
// 1 2 
// 1 2 3  
// 1 2 3 4 
}


void print4(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

// 1 
// 2 2 
// 3 3 3  
// 4 4 4 4 
}


void print5(int n){

    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1 ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

// * * * *
// * * *
// * *
// *

}


void print6(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1 ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
}



void print7(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

//     *    
//    ***   
//   *****  
//  ******* 
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1) ;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        cout<<endl;

    }
    
// *******
//  *****
//   ***
//    *
}
void print9(int n){
    // print7(n);
    // print8(n);

        // Top half (including middle line)
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n - i - 1; j++) cout << " ";
        for(int j = 0; j < 2 * i + 1; j++) cout << "*";
        for(int j = 0; j <= n - i - 1; j++) cout << " ";
        cout << endl;
    }

    // Bottom half (start from i=0 to duplicate middle line)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < 2 * n - (2 * i + 1); j++) cout << "*";
        for(int j = 0; j < i; j++) cout << " ";
        cout << endl;
    }


//     *    
//    ***   
//   *****  
//  ******* 
//  *******
//   *****
//    ***
//     *
}


void print10(int n){
    for(int i=1;i<=2*n-1;i++){

        int star = i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    // print8(n);
    // print9(n);

    print10(n);
    return 0;
}
