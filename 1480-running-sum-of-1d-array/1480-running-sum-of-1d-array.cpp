class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,sum=0,n=nums.size();
        vector<int> vec;
        
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
            vec.push_back(sum);
        }
        
        return vec;
    }
};