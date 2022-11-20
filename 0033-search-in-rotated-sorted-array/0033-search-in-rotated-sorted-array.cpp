class Solution {
public:
    int findpivot(vector<int>& nums)
    {
        int i,n=nums.size();

        for(i=0;i<n-1;i++)
        {
            if(i+1<n)
        {  if(nums[i]>nums[i+1])
         return i;}
        }
        return -1;
    }
    int findtarget(int i,int j,vector<int>& nums,int target)
    {
        if(i>j)
            return -1;
        if(nums[j]==target)
            return j;
        if(nums[i]==target)
            return i;
        
        while(i<j)
        {
            int mid=(i+j)/2;

            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            j=mid;
            else i=mid+1;
        }

       return -1;
    }
    int search(vector<int>& nums, int target) {
       // int pivot=findpivot(nums);
        int n=nums.size();
         if(n==1)
         {
             if(nums[0]==target)
             return 0;
             else return -1;
         }
         int pivot=findpivot(nums);
         cout<<pivot<<" ";
        if(pivot==-1)
        {
          int ans=findtarget(0,n-1,nums,target);
          if(ans!=-1)
          return ans;
         
        }
        else {
             int ans1=findtarget(0,pivot,nums,target);
            cout<<ans1<<" ";
        int ans2=findtarget(pivot+1,n-1,nums,target);
cout<<ans2;
         if(ans1!=-1)
        return ans1;
        else if(ans2!=-1)
        return ans2;
      
        }
      
       return -1;
     
    }
};