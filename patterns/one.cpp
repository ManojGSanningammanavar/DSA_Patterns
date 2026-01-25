#include<bits/stdc++.h>
using namespace std;

//sum of n elements
/*int s(int n ){
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
*/

//sum of digits of a number
/*int sumofdigits(int n){
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
}*/

//binomial coefficient nCr
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