#include<iostream>
#include <typeinfo>
using namespace std;

 int main(){
     cout<<"Hello DSA!"<<"\n";
     cout<<"Hello DSA!"<<endl;
     cout<<"Hello DSA!"<<endl;

     double a = 89.898649849;
     int b = (int) a;
        cout<<b<<endl;

    //int or double to String
    int c = 89;
    string s = to_string(c);
    cout<<s<<endl;
    
    //String to int or double
    string s1 = "1234";
    int d = stoi(s1);
    cout<<d<<endl;
    cout << typeid(c).name()<<endl;

    //char to int
    char ch= '7';
    int m = ch - '0';
    cout<<m<<endl;
    }

