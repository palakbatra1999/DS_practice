class Solution {
public:
    void rotate(int i,int j,vector<int>& nums)
    {
        while(i<j)
        {
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            
            i++;
            j--;
        }
    }
    bool check(vector<int>& nums) {
        int k=-1,n=nums.size();
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])
            {
                k=i;
                break;
            }
        }
       if(k!=-1) 
       {    rotate(0,k,nums);
        rotate(k+1,n-1,nums);
        rotate(0,n-1,nums);
       }  
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])
            return false; 
        }
        return true;
    }
};