class Solution {
public:
    int sumCounts(vector<int>& nums) {

        int sum = 0;

        for( int i = 0 ; i < nums.size() ; i++ ){

            unordered_set<int> check;

            

            for( int j = i ; j < nums.size() ; j++ ){

                check.insert(nums[j]);

                sum += check.size()*check.size();

               
            }
        }


       



        return sum;
        
    }
};