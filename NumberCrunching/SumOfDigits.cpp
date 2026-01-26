#include<iostream>
using namespace std;
int sumofdigits(int n){
    int digSum =0;
    while(n>0){
       int  lastDigit = n%10;
        n/=10;
        digSum += lastDigit;
    }
    return digSum;
}

int main(){
    int suym = sumofdigits(1234);
    cout<<suym;
}