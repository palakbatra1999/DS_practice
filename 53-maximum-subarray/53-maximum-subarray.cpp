class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        
        int sum=0,i,l=nums.size();
        
        for(i=0;i<l;i++)
        {
            sum+=nums[i];
            
            if(sum<nums[i])
                sum=nums[i];
            if(maxsum<sum)
                maxsum=sum;
        }
        
        return maxsum;
    }
};