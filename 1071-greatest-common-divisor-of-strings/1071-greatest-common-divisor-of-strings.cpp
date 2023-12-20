class Solution {
    
public:
    int GCD(int a, int b)
    {
        while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    }
    string gcdOfStrings(string s, string t) {
        
        cout<<s.size()<< " "<<t.size();
        if(s+t != t+s)
            return "";
        
        int sum = GCD(s.size(),t.size());
        cout<< sum;
        if(sum== -1)
            return "";
        return s.substr(0,sum);
        
        
    }
};