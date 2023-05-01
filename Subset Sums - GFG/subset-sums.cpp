//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void printsub(vector<int> arr,int n, int i,vector<int> &output,int sum)
    {
        if(i==n)
        {
            output.push_back(sum);
           // cout<<sum<<" ";
            return;
        }
         
        printsub(arr,n,i+1,output,sum+arr[i]);
        printsub(arr,n,i+1,output,sum);
        
        return;
       
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        
      vector<int> output;
      int sum=0;
     printsub(arr,N,0,output,sum);
       sort(output.begin(),output.end());
      return output;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends