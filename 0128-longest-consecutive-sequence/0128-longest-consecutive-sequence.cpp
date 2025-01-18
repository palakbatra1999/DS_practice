class Solution {
public:
int search(unordered_set<int>& os, int i)
{
    if(os.find(i) != os.end()) 
    {
        return 1 + search(os,i+1);
    } else return 0;

    
}
    int longestConsecutive(vector<int>& nums) {

        int m=0;

        unordered_set<int> os;

        for(int i=0;i<nums.size();i++)
        {
            os.insert(nums[i]);
        }

        for(auto it : os)
        {
         if(os.find(it-1) == os.end())   
           { m=max(m,search(os,it));}
           
        }

        return m;
        
    }
};
