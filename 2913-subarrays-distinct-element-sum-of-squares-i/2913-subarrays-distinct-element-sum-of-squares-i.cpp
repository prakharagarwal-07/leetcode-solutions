class Solution {
public:
    int sumCounts(vector<int>& nums) {

        int sum = 0;

        for( int i = 0 ; i < nums.size() ; i++ ){

            for( int j = i ; j < nums.size() ; j++ ){

                set<int> check;

                for( int k = i ; k <= j ; k++ ){

                    check.insert(nums[k]);




                }

                sum += check.size()*check.size();
            }
        }

        return sum;
        
    }
};