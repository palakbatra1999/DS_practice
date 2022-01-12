class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
         std::vector<int>::iterator it;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        
        int len1=nums1.size(),len2=nums2.size();
        
        while(i<len1&&j<len2)
        {
            if(nums1[i]==nums2[j])
            {
                  it = std::find (result.begin(), result.end(),nums1[i]);
                 if (it == result.end())
                  result.push_back(nums1[i]);
                i++;j++;
              
            }
            else
            {
                if(nums1[i]<nums2[j])
                    i++;
                else j++;
            }
        }
        
       return result;
    }
};