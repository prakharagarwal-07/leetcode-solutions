class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        map<int , int> freq;

        for( int i = 0 ; i < nums.size() ; i++ ){

            freq[nums[i]]++;

        }

        vector<int> ans;

        while( ans.size() < nums.size() ){

            for( auto &val : freq ){

                if( val.second > 0 ){

                    ans.push_back(val.first);
                }

                val.second--;
            }
        }

        return ans;
        
    }
};