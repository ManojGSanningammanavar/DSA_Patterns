#include<bits/stdc++.h>
using namespace std;

//sum of n elements
int s(int n ){
    int sum =0;
    for(int i=0; i<n; i++){
        sum +=i;
    }
    return sum;
}

int main(){
    int sum = s(10);
    cout<<sum;
}