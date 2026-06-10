#include<bits/stdc++.h>
using  namespace std;
/ * 
    *
    * *
    * * *
    * * * *
    * * * * *
* /
void p1(int n){
    
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";

        }
        cout<<endl;
    }
}

void p2(int n){
    for(int i =0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void p3(int n){
    for(int i =1; i<=n; i++){
        for (int j =1; j<=i; j++){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
}

void p4(int n){
    for(int i =0 ; i< n; i++){
        for (int j =i; j<n-1; j++){
            cout<<"* ";

        }
        cout<<endl;
    }
}

void p5(int n){
    for(int i =0 ; i<=n; i++){
        for (int j =1; j<=n-i; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}

void p6(int n){
    for(int i =0 ; i<=n; i++){
        for (int j =1; j<=n-i; j++){
            cout<<"* ";

        }
        cout<<endl;
    }
}

void p7(int n){
    for (int i =0 ; i<n; i++){
        for(int j =0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k =0; k<2*i+1; k++){
            cout<<"*";

        }
        for(int l=0; l<n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    //p1(n);
    //p2(n);
    //p3(n);
    p7(n);
    return 0;
}