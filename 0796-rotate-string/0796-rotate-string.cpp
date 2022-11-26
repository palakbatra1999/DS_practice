class Solution {
public:
    bool rotateString(string s, string goal) {
        int i,l=s.length(),n=goal.length(),index=0;
        if(l!=n)
            return false;
        
        vector<int> v;
        char c=goal[0];
        
        for(i=0;i<n;i++)
        {
            if(s[i]==c)
              { 
                v.push_back(i);
              //  cout<<i<<" ";
               //  break;
              }
        }
      
        for(i=0;i<v.size();i++)
      { 
            int index=v[i];
           
            if(s.substr(index,index+l)+s.substr(0,index)==goal)
           return true;
       // cout<<p;
      }
       
       // else
            return false;
    }
};