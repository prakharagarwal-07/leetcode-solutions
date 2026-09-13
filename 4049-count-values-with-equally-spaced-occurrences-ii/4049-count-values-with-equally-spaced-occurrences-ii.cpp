class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        unordered_map<int , vector<int>> dist;

        for( int i = 0 ; i < nums.size() ; i++ ){

            dist[nums[i]].push_back(i);

        }

        int count = 0;

        for( auto vec : dist ){

            int minDist = -1;
            bool isCount = true;

            if( vec.second.size() >= 3 ){

                for( int j = 1 ; j < vec.second.size() ; j++ ){


                    if( minDist != -1 && minDist != vec.second[j] - vec.second[j-1] ){

                        isCount = false;

                        break;


                    }

                    minDist = vec.second[j] - vec.second[j-1];





                }

                if( isCount ){

                    count++;
                }
            }
        }

        return count;
    }
};