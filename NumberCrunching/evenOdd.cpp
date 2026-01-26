
#include<iostream>
using namespace std;

int evenodd(int n){
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
}