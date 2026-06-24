#include <iostream>
using namespace std;

bool palindrome(int n){
    int rev = 0;
    int dup = n;
    while(n>0){
        int ld = n%10;
        rev = (rev*10) + ld;
        n /=10;
    }
    if(dup == rev){
       return true;
    }
    
    return false;
    
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin >> n;
    
    if(palindrome(n)){
        cout<<"The given number is palnidrome ";
    }
    else{
        cout<<"The given number is Not palindrome";
    }
}