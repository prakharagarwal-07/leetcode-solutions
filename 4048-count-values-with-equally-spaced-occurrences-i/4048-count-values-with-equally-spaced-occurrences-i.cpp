class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        unordered_map<int , int> freq;

        for( int i = 0 ; i < nums.size() ; i++ ){

            freq[nums[i]]++;

        }

        unordered_map<int , vector<int>> dist;

        for( int j = 0 ; j < nums.size() ; j++ ){

            if( freq[nums[j]] == 3 ){

                dist[nums[j]].push_back(j);

            }
        }

        int count = 0;

        for( auto vec : dist ){

            if( vec.second[2]-vec.second[1] == vec.second[1]-vec.second[0] ){

                count++;
            }
        }

        return count;
        
    }
};