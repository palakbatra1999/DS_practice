class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,l=nums.size();
        int sum=0;
        map<int,int> mp;
        vector<int> vec;
        mp[sum]=1;
        for(i=0;i<l;i++)
        { 
           sum+=nums[i];
           
            vec.push_back(sum);
            
        }
      int count=0;
        for(i=0;i<l;i++)
        {
           
                int c=vec[i]-k;
                if(mp[c]>0)
                    count+=mp[c];
            
            mp[vec[i]]++;
        }
        
        return count;
    }
};