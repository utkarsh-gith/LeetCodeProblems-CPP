class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> res;

        int top = 0, left = 0;
        int bottom = n-1, right = m-1;

        while(top<=bottom && left<=right){
            
            for(int i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=bottom;i++){
                res.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
            }
            bottom--;

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
            }
            left++;
        }

        return res;
    }
};