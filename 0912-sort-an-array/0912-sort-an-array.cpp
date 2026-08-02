class Solution {
public:

    void merge( vector<int> &nums , int start , int mid , int end ){

        int i = start;
        int j = mid+1;
        vector<int> temp;

        while( i <= mid && j <= end ){

            if( nums[i] <= nums[j] ){

                temp.push_back(nums[i]);
                i++;

            }

            else{

                temp.push_back(nums[j]);
                j++;
            }

        }

        while(i <= mid ){

            temp.push_back(nums[i]);
            i++;

        }

        while( j <= end ){

            temp.push_back(nums[j]);
            j++;

        }

        int k = 0;

        while( k < temp.size() ){

            nums[k+start] = temp[k];
            k++;

        }




    }

    void mergeSort( vector<int> &nums , int start , int end ){

        if( start == end ){

            return;

        }

        int mid;

        mid = start + (end-start)/2;

        mergeSort( nums , start , mid );

        mergeSort( nums , mid+1 , end );

        merge( nums , start , mid , end );


    }


    vector<int> sortArray(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;

        mergeSort( nums , start , end );

        return nums;
    }
};