class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        map<int,int> pSum;

        pSum[0]=1;

        int sum=0, count=0;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

            if(pSum.find(sum-k)!=pSum.end())
            {
               count+=pSum[sum-k];
            }

            pSum[sum]++;
        }

        return count;
        
    }
};
