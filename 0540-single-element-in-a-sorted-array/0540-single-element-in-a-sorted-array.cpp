class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n=nums.size(),i=0;
        
         int left=0,right=n-1;
       while(i<n)
       {
           if((i+1<n)&&(nums[i]==nums[i+1]))
               i=i+2;
           else return nums[i];
       }
        return -1; 
        
    }
};