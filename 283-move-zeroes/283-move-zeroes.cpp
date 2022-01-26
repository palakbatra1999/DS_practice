class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> vec;
        int i,n=nums.size(),count=0;
        
        for(i=0;i<n;i++)
        {
           if(nums[i]==0)
               count++;
            else vec.push_back(nums[i]);
        }
     
        for(i=0;i<vec.size();i++)
          nums[i]=vec[i];
     
        for(i=n-1;i>=n-count;i--)
            nums[i]=0;
       // }
        
        
    }
};