class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int i=0,sum=0,maxsum=0,l=nums.size();
        
       while(i<l)
       {
           if(nums[i]==1)
               sum++;
           else
           {
               if(sum>maxsum)
                  maxsum=sum;
                    
                     sum=0;
               
           }
           i++;
       }
         if(sum>maxsum)
               {
                     maxsum=sum;
                     sum=0;
               }
        return maxsum;
        
    }
};