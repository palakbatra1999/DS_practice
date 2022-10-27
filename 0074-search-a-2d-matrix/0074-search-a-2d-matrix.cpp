class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j;
        int l=matrix.size(),n=matrix[0].size();
        
       int row=0,col=n-1;
        
        while(row<l&&col>-1)
        {
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]>target)
                    col--;
                    else row++;
        }
                    return false;
    }
};