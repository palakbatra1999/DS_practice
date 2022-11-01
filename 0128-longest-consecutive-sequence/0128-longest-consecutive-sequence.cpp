class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
         unordered_set <int> st;
        
        int i,n=nums.size(),m=0;
        
        for(i=0;i<n;i++)
        {   
            if (st.find(nums[i]) == st.end())
                st.insert(nums[i]);
        }
        
         unordered_set<int> :: iterator itr;
        
         for (itr = st.begin(); itr != st.end(); itr++)
         {  int c=1;
          int inte=*itr;
              if (st.find(inte-1) == st.end())
              {
                  int j=inte+1;
                while(st.find(j) != st.end())
                {
                   c++; 
                    j++;
                }
                  m=max(m,c);
              }
         }
        
        return m;
        
    }
};