class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    int i,j,k,l=nums.size();

    vector<vector<int>> vec;
    sort(nums.begin(),nums.end());

    for(i=0;i<l;i++)
    {
        if(i>0 && nums[i]== nums[i-1]) continue;
        j=i+1; k=l-1;

        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum == 0)
            {
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(nums[k]);

                vec.push_back(temp);

                j++;
                k--;

                while(j<k && nums[j]==nums[j-1]) // comparing with the last nums and moving towards k 
                j++;
                while(j<k && k<l && nums[k]==nums[k+1]) // comparing with the nums to  nums+ 1 and moving towards j
                k--;
            } else if(sum>0)   // we can't do j++ in order to make sum closer to zero, since array is sorted.. so decresing the bigger number only makes sense.
            k--;
            else j++; // we can't do k-- in order to make sum closer to zero, since array is sorted.. so increasing the smaller number only makes sense.
        }

    }

    return vec;
        
    }
};
