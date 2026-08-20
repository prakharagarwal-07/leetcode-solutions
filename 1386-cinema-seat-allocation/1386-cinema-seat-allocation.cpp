class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int , vector<int>> block;

        for( auto x: reservedSeats ){

            block[x[0]].push_back(x[1]);

        }

        int ans = (n-block.size())*2;

        

        for( auto y: block ){

        bool left = true;
        bool middle = true;
        bool right = true;

            for( auto z: y.second ){

                if( z >= 2 && z <= 5 ){

                    left = false;
                }

                if( z <= 9 && z >= 6 ){

                    right = false;

                }

                if( z >= 4 && z <= 7 ){

                    middle = false;
                }

            }


                if( left == true ){

                    ans += 1;
                }

                if( right == true ){

                    ans += 1;
                }

                else if( middle == true && left != true ){

                    ans += 1;
                }
        }

        return ans;


        
    }
};