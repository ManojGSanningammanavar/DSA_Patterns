class Solution {
public:
    int maxScore(vector<int>& cardScore, int k) {
        int left_sum = 0, right_sum = 0, maxSum = 0;

        for (int i = 0; i < k; i++) {
            left_sum += cardScore[i];
        }

        maxSum = left_sum;
        int right_index = cardScore.size() - 1;

        for (int i = k - 1; i >= 0; i--) {
            left_sum -= cardScore[i];
            right_sum += cardScore[right_index];
            right_index--;

            maxSum = max(maxSum, left_sum + right_sum);
        }

        return maxSum;
    }
};