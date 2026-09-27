class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

       
        
        vector<int> ans;

        vector<bool> used( nums.size() , false );

        while( ans.size() != nums.size() ){

            set<int> s;
            unordered_map<int , int> freq;

            

            for( int i = 0 ; i < nums.size() ; i++ ){

                if( freq[nums[i]] < 1 && used[i] == false ){

                    s.insert(nums[i]);
                    used[i] = true;
                    freq[nums[i]]++;

                }

                

            }

            for( auto val : s ){

                ans.push_back(val);

            }

        }

        return ans;
        
    }
};