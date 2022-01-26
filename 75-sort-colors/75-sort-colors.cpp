class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        
        int i=0,n=nums.size();
        
        while(i<n)
        {
            if(nums[i]==0)
                a++;
            else if(nums[i]==1)
                b++;
            else if(nums[i]==2)
                c++;
            
            i++;
        }
        vector<int> vec;
        
        for(i=0;i<a;i++)
            vec.push_back(0);
        
          for(i=0;i<b;i++)
            vec.push_back(1);
        
          for(i=0;i<c;i++)
            vec.push_back(2);
        
        for(i=0;i<n;i++)
            nums[i]=vec[i];
        
    }
};