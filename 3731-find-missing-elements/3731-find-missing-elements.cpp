class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<bool> check(101 , false);
        int maxi = INT_MIN;
        int mini = INT_MAX;
        vector<int> ans;

        for( int val: nums ){

            check[val] = true;

            maxi = max( val , maxi );
            mini = min( val , mini );

        }

        for( int i = mini + 1 ; i < maxi ; i++ ){

            if(check[i] == false){

                ans.push_back(i);
            }
        }

        return ans;


        
    }
};