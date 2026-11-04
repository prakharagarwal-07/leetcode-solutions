class Solution {
public:
    int minMoves(vector<int>& nums) {


        int maxi = INT_MIN;

        long long int ans = 0;

        for( int i = 0 ; i < nums.size() ; i++ ){

            maxi = max( maxi , nums[i] );

        }

        for( int j = 0 ; j < nums.size() ; j++ ){

           while( nums[j] < maxi ){

            nums[j]++;
            ans++;

           }
        }

        return ans;
        
    }
};