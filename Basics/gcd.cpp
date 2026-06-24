#include <iostream>
using namespace std;

int findGCD(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int main(){
    int n1 ;
    cout<<"Enter the number 1 : ";
    cin>>n1;
    int n2;
    cout<<"Enter the number 2 : ";
    cin>>n2;

    int gcd = findGCD(n1,n2);
    cout <<"The gcd od the numbers "<<n1<<" and "<<n2<<" is "<<gcd;

}