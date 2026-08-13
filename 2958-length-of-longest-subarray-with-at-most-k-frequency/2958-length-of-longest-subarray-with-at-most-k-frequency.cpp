class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int left = 0;
        int right = 0;
        unordered_map<int,int> freq;
        int maxLength = INT_MIN;
        int currLength = 0;


        while( right != nums.size() ){

            freq[nums[right]]++;

            

            while( freq[nums[right]] > k ){


                freq[nums[left]]--;

                left++;
            }

            currLength = right-left+1;

            maxLength = max(maxLength , currLength);

            right++;


        }

        return maxLength;
        
    }
};