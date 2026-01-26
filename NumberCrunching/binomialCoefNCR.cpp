
#include<iostream>
using namespace std;

int fact(int n){
	if(n ==0 || n==1) return 1;
    return n*fact(n-1);
}

int ncr(int n , int r){
    if (r > n) return 0;   
	int nfact = fact(n);
	int rfact = fact(r);
	int nrfact = fact(n-r); 
	return nfact/(rfact * nrfact);
}

int main(){
	int n = ncr(5,2);
	cout<<n;
}