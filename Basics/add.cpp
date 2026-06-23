#include<iostream>
using namespace std;

int add(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    int c = add(10,30);
    cout<<"the sum is :"<<c<<endl;
}