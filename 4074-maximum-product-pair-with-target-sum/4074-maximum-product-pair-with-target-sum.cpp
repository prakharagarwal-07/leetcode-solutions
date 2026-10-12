class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {

        unordered_map<int ,int> m;

        int maxProd = INT_MIN;

        int first = -1;
        int second = -1;

        for( int i = 0 ; i < nums.size() ; i++ ){

            if( i != 0 && m.find( target - nums[i] ) != m.end() && nums[i] != nums[m[target-nums[i]]] ){

                int prod = (target-nums[i])*nums[i];

                if( prod > maxProd ){

                    first = i;
                    second = m[target-nums[i]];
                    maxProd = prod;
                }
            }

            m[nums[i]] = i;
        }

        if( first == -1 && second == -1 ){

            return { -1 , -1 };
        }

        if( nums[first] > nums[second] ){

            return { first , second };
        }

      

            return { second , first };
        

        
    }
};