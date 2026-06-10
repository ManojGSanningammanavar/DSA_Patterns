int maxProduct(vector<int>& nums) {

            int max_Product = nums[0];
            int min_Product = nums[0];
            int result = nums[0];

            for(int i = 1; i < nums.size(); i++) {

                if(nums[i] < 0)
                    swap(max_Product, min_Product);

                max_Product = max(nums[i], max_Product * nums[i]);
                min_Product = min(nums[i], min_Product * nums[i]);

                result = max(result, max_Product);
            }

            return result;
}