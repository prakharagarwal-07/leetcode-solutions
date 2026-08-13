class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int left = 0;
        int right = 0;
        unordered_map<int,int> freq;
        int maxLength = 0;
        


        while( right != nums.size() ){

            freq[nums[right]]++;

            

            while( freq[nums[right]] > k ){


                freq[nums[left]]--;

                left++;
            }

            

            maxLength = max(maxLength , right-left+1);

            right++;


        }

        return maxLength;
        
    }
};