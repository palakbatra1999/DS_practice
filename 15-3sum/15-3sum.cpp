class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i,j,k;
        vector<vector<int>> result;
        if(n<3)
            return result;
        
       
        for(j=0;j<n;j++)
        { 
         i=j+1;
         k=n-1;
          while(i<k)
            { int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                { vector<int> res;
                     res.push_back(nums[i]);
                     res.push_back(nums[j]);
                     res.push_back(nums[k]);
                     result.push_back(res);
                   
                    while(i<k&&nums[i]==res[0])
                    i++;
                    while(i<k&&nums[k]==res[2])
                    k--;
                }
                else if(sum<0)
                    i++;
             else k--;
            }
        while(j+1<n&&nums[j+1]==nums[j])
                j++;
         
       
        
        }
        
        return result;
    }
};