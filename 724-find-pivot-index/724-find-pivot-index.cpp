class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int i,n=nums.size(),sum=0;
        
        for(i=0;i<n;i++)
        sum+=nums[i];
        
        int leftsum=0;
        
        for(i=0;i<n;i++)
        {
         
                // leftsum+=nums[i];
                     sum-=nums[i]; 
                
                if(leftsum==sum)
                    return i;
                else   leftsum+=nums[i];
           
            
           
        }
        return -1;
        
    }
};