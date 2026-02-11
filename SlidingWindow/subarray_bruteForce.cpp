#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);

    for(int i =0 ; i<n ; i++){
        for(int j =i ; j<n ; j++){
            for(int k =i ; k<=j; k++){
                cout<<array[k]<<" " ;
            }
            cout<<endl;
        }
}    
return 0;
}
