class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int m=0,min=10000,l=prices.size();
        
        for(int i=0;i<l;i++)
        {
           m=max(m,prices[i]-min);
            if(prices[i]<min)
                min=prices[i];
               
        }
      
        return m;
    }
};