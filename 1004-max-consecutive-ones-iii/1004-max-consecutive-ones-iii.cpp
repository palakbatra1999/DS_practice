class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int l= nums.size();
        int i=0,j=0;
        
        int maxLen=0;
        
        while(i<l&& j<l)
        {
            if(nums[j]==1)
            {  
                if(k>=0)
                {
                    maxLen=max(maxLen,j-i+1);
                    
                }
                else 
                {
                    if(nums[i]==0)
                        k++;
                    i++;
                }
                
                j++;
                
                
            }
            
            else 
            {
                k--;
                if(k<0)
                {
                     if(nums[i]==0)
                        k++;
                    
                    i++;
                    j++;
                }
                else 
                {
                     maxLen=max(maxLen,j-i+1);
                    
                    j++;
                }
                
            }
        }
        return maxLen;
        
    }
};