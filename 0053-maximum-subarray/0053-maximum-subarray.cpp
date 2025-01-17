Brute force approach: O(n3)

Better approach: O(n2) take summation of the nums[j] and check for max

Best approach(Kadanes algorithm) : class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max=nums[0], sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum>max)
            {
              max=sum;
            }
            if(sum<0)
            sum=0;
        }
        return max;
        
    }
};
