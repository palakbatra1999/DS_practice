class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // sort(nums.begin(),nums.end());
        vector<int> result;
        int i=0,j=nums.size()-1;
        ///////////////////////////
        while(i<j)
        {
           int m=target-nums[i];
            
            for(int k=i+1;k<j+1;k++)
            {
                if(nums[k]==m)
                {
                    result.push_back(i);
                    result.push_back(k);
                    //
                }
            }
            i++;
        }
        
        return result;
    }
};
