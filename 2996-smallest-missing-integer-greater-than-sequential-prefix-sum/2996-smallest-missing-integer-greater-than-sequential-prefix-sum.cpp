class Solution {
public:
    int missingInteger(vector<int>& nums) {


        int maxSum = nums[0];
        int ans = 0;
        unordered_map <int , int> freq;


        for( int i = 0 ; i < nums.size() ; i++ ){

            freq[nums[i]]++;

        }

        if( nums.size() == 1 ){

            return nums[0]+1;
        }
        

        for( int i = 1 ; i < nums.size() ; i++ ){

            freq[nums[i]]++;

            

            if( nums[i-1] + 1 == nums[i] ){

                maxSum = maxSum + nums[i];

            }

            if( i == nums.size()-1 || nums[i-1] + 1 != nums[i] ){

                ans = maxSum;
                break;
                
            }

            
        }

        while( freq.find(ans) != freq.end() ){

            ans++;

        }








            return ans;




        
    }
};