class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        for( int i = 0 ; i < matrix.size() ; i++ ){
            for( int j = i + 1 ; j < matrix.size() ; j++ ){

                swap( matrix[i][j] , matrix[j][i] );
            }
        }

        for( int k = 0 ; k < matrix.size() ; k++ ){
            for( int m = 0 ; m < matrix.size()/2 ; m++ ){

                swap( matrix[k][m] , matrix[k][matrix.size()-m-1]);
            }
        } 


        
    }
};