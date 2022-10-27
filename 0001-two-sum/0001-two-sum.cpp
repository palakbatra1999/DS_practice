class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int l=nums.size();
        vector<int> v;
        for(int i=0;i<l;i++)
        {
            int c=target-nums[i];
            
            if(m.find(c)==m.end())
                m[nums[i]]=i;
            else 
            {
                v.push_back(i);
                v.push_back(m[c]);
                 return v;
            }
        }
        return v;
    }
};