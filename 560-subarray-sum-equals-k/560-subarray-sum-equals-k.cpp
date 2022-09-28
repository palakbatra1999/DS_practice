class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,l=nums.size();
        int sum=0;
        map<int,int> mp;
     //   vector<int> vec;
        mp[sum]=1;
     
      int count=0;
        for(i=0;i<l;i++)
        { 
            sum+=nums[i];
           
                int c=sum-k;
                if(mp[c]>0)
                    count+=mp[c];
            
            mp[sum]++;  //trick is to store the value in map after all the conditions checked
        }
        
        return count;
    }
};


