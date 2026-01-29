#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string s){
	int left = 0;
	int right = s.length()-1;
	while(left<right){
		if(s[left]!=s[right]) return false;
		left++;
        right--;
}
return true;
}

int main(){
string test_str = "manoj";
if(palindromeCheck(test_str)){
    cout << "Is a palindrome" << endl;
}
else{
    cout << "Not a palindrome" << endl;
}

return 0;
}
