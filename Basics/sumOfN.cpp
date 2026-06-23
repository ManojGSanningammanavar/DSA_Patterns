#include <iostream>
using namespace std;

int sumOfN(int n){
    int sum = 0;
    for(int i =0; i <=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n ;
    cout<< "enter the number n : "<<endl;
    cin>>n;

    int son= sumOfN(n);
    cout<< son;
}