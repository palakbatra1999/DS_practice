 int findFloor(vector<int>& arr, int k) {

       int low=0,high=arr.size()-1,min=INT_MIN,ind=-1;
       
       while(low<=high)
       {
           int mid=(low+high)/2;
           
           if(arr[mid]==k)
           return mid;
           else if(arr[mid]<k)
           {
              if(min<arr[mid])
              {min=arr[mid];
                  ind=mid;
              }
               low=mid+1;
           }else high=mid-1;
       }
       
       return ind;
    }
