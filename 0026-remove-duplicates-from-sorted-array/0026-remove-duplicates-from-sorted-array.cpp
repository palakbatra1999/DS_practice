class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int l=nums.size();
        if(l==1)
            return 1;
        
        int i=0,j=0,k=0;
        
        while(i<l && j<l)
        {
            if(nums[i]==nums[j])
                j++;
            else 
            {
             nums[++k]=nums[j];
                i=j;
                
            }
            
        }
        return k+1;
        
    }
};