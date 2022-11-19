//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
    int left=0,right=n-1,mid;
    
    int c=-1;
    if(v[n-1]<=x)
    return n-1;
    while(left!=right)
    {
        mid=(left+right)/2;
        
        if(v[mid]==x)
        return mid;
        
        else if(v[mid]<x)
        {
            left=mid+1;
            c=mid;
        }
        
        else
        {
            right=mid;
        }
    }
    return c;    
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends