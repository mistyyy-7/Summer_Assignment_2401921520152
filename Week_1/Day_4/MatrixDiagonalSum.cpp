class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<mat[i].size();j++){

                // primary diagonal
                if(i==j){
                    sum=sum+mat[i][j];
                }

                //secondary diagonal
                else if(i+j==n-1){ 
                    sum=sum+mat[i][j];
                }
            }
        }
        return sum;
        
    }
};