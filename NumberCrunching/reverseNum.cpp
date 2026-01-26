#include<iostream>
using namespace std;
int reverse(int n){
    int rev=0;
	while (n!=0){
        if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
		int lastdigit = n%10;
		rev = rev*10 + lastdigit;
		n/=10;
	}
	return rev;
}

int main(){
	int revn = reverse(23145);
	cout<<revn;
}

//recursive approach
int helper(int n, int rev){
    if(n==0) return rev;
    return helper(n/10, n%10 + rev*10);
}

int reverse(int n){
    return helper(n,0);
}