class Solution {
public:
    int sumCounts(vector<int>& nums) {

        int sum = 0;

        vector<vector<int>> mat;

        for( int i = 0 ; i < nums.size() ; i++ ){

            vector<int> curr;

            for( int j = i ; j < nums.size() ; j++ ){

                curr.push_back(nums[j]);

                mat.push_back(curr);

            }
        }


       

        for( int k = 0 ; k < mat.size() ; k++){

             set<int> check;

            for( int m = 0 ; m < mat[k].size() ; m++ ){

                check.insert(mat[k][m]);
            }

            sum += check.size()*check.size();


        }



        return sum;
        
    }
};