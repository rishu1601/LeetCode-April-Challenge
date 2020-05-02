
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(n == 0)return 0;
        int m = matrix[0].size();
        if(n * m == 0)return 0;
        for(int i = 0; i < n; i++ ){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == '1')matrix[i][j] = 1;
                else matrix[i][j] = 0;
            }
        }
        int ans = 0;
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][j] == 1){
                    matrix[i][j] = min(matrix[i][j - 1], matrix[i - 1][j]);
                    matrix[i][j] = min(matrix[i][j], matrix[i - 1][j - 1]) + 1;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(ans < matrix[i][j]) ans = matrix[i][j];
            }
        }
        return ans * ans;
    }
};
