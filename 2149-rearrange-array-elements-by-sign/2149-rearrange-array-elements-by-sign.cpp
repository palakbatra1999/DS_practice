brute force ::

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>  vec,pos,neg;
        
        int i,l=nums.size();
        
        for(int i=0;i<l;i++)
        {
           if(nums[i]<0)
               neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }
        for(int i=0;i<l/2;i++)
        {
           vec.push_back(pos[i]);
           vec.push_back(neg[i]);
        }
        
        return vec;
    }


    better approach :: 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int i=0,j=1, l = nums.size();
        vector<int> res(l,0);

        for(int k=0;k<l;k++)
        {
            if(nums[k]>0)
            {
               res[i]=nums[k];
               i= i+2;
            } else{
                res[j]=nums[k];
                j=j+2;
            }
        }

        return res;
        
    }
};
};
