class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int i,j,n=nums.size(),m=INT_MIN;
        vector<int> v;
        
        for(i=0;i<n;i++)
        {
            sum=sum+nums[i];
            
          if(sum>m)
              m=sum;
           if(sum<0)
              sum=0;
            
        }
     
      
        return m;
    }
};