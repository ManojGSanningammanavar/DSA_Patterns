#include<iostream>
using namespace std;

int largest(int n){
	int large =0;
	while (n!=0){
		int lastdigit = n%10;
		if(lastdigit>large){
		large = lastdigit;}
		n/=10;
	}
	return large;
}

int main(){
	int count = largest(23145);
	cout<<count;
}