//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int a[], int b[], int n, int m, int k)
    {
        int i=0,j=0,c=0;
        
        while(i<n&&j<m)
        {
            if(a[i]<b[j])
            {
                i++;
                c++;
                
                if(c==k)
                return a[i-1];
            }
            else {
                j++;
                c++;
                
                if(c==k)
                return b[j-1];
            }
           // c++;
          // cout<<c<<" "<<i<<" "<<j<<endl;
        }
        
        if(i<n)
        return a[i+k-c-1];
        
        if(j<m)
        return b[j+k-c-1];
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends