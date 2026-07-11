class Solution {
    public int minSubArrayLen(int target, int[] nums) {

        //initialize the left and sum to 0
        int left =0, sum =0;

        //initialise the ans to max integer
        int ans = Integer.MAX_VALUE;

        //loop the right from zero to end of array to calculate the sum
        for(int right =0; right<nums.length; right++){

            //add the value of nums[right] to the sum
            sum += nums[right];

            //loop to shrink the arr size if the sum is >= the target
            while(sum >= target){

                //before shrink strore the arr length thet has got he sum>= in ans and check it with the previous lentgh for min
                ans = Math.min(ans. right-left+1);

                //remove the nums[left] and increment the left to shrink the window
                sum -= nums[left];
                left++

            }
        }

        //return the ans if it has the min len or else retrun zero
        return (ans == Integer.MAX_VALUE)? 0 : ans;
    }
}