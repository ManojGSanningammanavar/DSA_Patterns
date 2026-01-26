#include<iostream>
using namespace std;
int countn(int n){
	int sum =0;
	while (n!=0){
		int lastdigit = n%10;
		sum+=lastdigit;
		n/=10;
	}
	return sum;
}

int main(){
	int count = countn(23145);
	cout<<count;
}