class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {

        if( nums.size() < 1 ){

            return nums;
        }

        int i = 0;

        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[i]);
        i++;
        arr2.push_back(nums[i]);
        i++;

        while( i < nums.size() ){

            if( arr1.back() > arr2.back() ){

                arr1.push_back(nums[i]);
            }

            else{

                arr2.push_back(nums[i]);
            }

            i++;


        }

        arr1.insert( arr1.end() , arr2.begin() , arr2.end() );

        return arr1;

        
        
    }
};