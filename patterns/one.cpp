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
/*int fact(int n){
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
}*/


//check if a number is power of two
/*bool isPowerOfTwo(int n){
	return (n>0) &&( (n&(n-1)) ==0);
}

int main(){
	int power = isPowerOfTwo(9);
	cout<<power;
	return 0;
}*/

//even or odd
/*int evenodd(int n){
	if(n%2==0){
		return 0;	
    }
	else{
		return 1;
	}
}

int main(){
	if(evenodd(5)==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}*/

//reverse number
/*int reverse(int n){
    int rev=0;
	while (n!=0){
		int lastdigit = n%10;
		rev = rev*10 + lastdigit;
		n/=10;
	}
	return rev;
}

int main(){
	int revn = reverse(23145);
	cout<<revn;
}*/

//count digits in n + sum of digits-
/*int countn(int n){
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
}*/

//largest digit in  number
/*int largest(int n){
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
}*/