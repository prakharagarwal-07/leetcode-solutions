class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        unordered_map<int , int> m;

        int i;
        int j;

        vector<int> ans;


        for( i = 0 ; i < grid.size() ; i++ ){

            for( j = 0 ; j < grid[0].size() ; j++ ){

                if( m[grid[i][j]] == 1 ){

                    ans.push_back( grid[i][j] );


                }

                m[grid[i][j]]++;
            }
        }

        for( int k = 1 ; k <= grid.size()*grid.size() ; k++ ){

            if( m.find(k) == m.end() ){

                ans.push_back(k);
            }
        }

        return ans;
        
    }
};