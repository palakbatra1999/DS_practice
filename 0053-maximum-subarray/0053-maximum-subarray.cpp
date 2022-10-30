class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int i,j,n=nums.size(),m=INT_MIN;
        vector<int> v;
        for(i=0;i<n;i++)
        {
            
           if(sum+nums[i]<0)
         {      v.push_back(nums[i]);
            sum=0;}
            else
            {
              sum+=nums[i];
              v.push_back(sum);
            }
            
        }
        for(auto x:v)
            m=max(m,x);
        return m;
    }
};