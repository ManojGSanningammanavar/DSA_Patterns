#include<iostream>
using namespace std;

//check if a number is power of two
bool isPowerOfTwo(int n){
	return (n>0) &&( (n&(n-1)) ==0);
}

int main(){
	int power = isPowerOfTwo(9);
	cout<<power;
	return 0;
}