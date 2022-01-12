class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i=0;
        int l=nums.size();
        
        vector<int> arr;
        
        for(i=0;i<l;i++)
          arr.push_back(nums[i]);
        
         for(i=0;i<l;i++)
          arr.push_back(nums[i]);
        
        return arr;
    }
};