#include <bits/stdc++.h>
using namespace std;

/* Brute force
class Solution {
public:
    // Function to find all divisors
    vector<int> getDivisors(int N) {
        // Create a vector to store divisors
        vector<int> res;

        // Loop from 1 to N
        for (int i = 1; i <= N; i++) {
            // Check if i is a divisor of N
            if (N % i == 0) {
                // Add i to the result
                res.push_back(i);
            }
        }
        // Return the list of divisors
        return res;
    }
};
*/

// optimal

vector<int> getDivisors(int N){
    vector<int> res;

    for(int i=1; i*i<=N ; i++ ){
        if(N % i ==0 ){
            res.push_back(i);

            if(i!=N/i){
                res.push_back(N/i);
            }
        }
    }
    return res;
}

int main() {
    // Input number
    int N = 36;
    // Call the function to get divisors
    vector<int> result = getDivisors(N);
    // Print the result
    cout << "Divisors of " << N << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
