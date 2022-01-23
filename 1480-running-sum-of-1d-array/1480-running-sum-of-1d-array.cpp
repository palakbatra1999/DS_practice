class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> result;
        int i,n=nums.size();
        for(i=0;i<n;i++)
        {
           sum+=nums[i];
            result.push_back(sum);
        }
        return result;
    }
};