class Solution {
public:

    void merge( vector<int> &nums, int start , int end , int mid , int &count){

        int i = start;
        int j = mid+1;
        vector<int> temp;

        int first = start;
        int second = mid+1;

        while( first <= mid && second <= end ){

            if( nums[first] > 1LL*2*nums[second] ){

                count = count + ( mid - first + 1 );
                second++;
            }

            else{

                first++;
            }
            


        }
        

        while( i <= mid && j <= end ){

            if( nums[i] > nums[j] ){

               

                temp.push_back( nums[j] );
                j++;


            }

            else{

                temp.push_back( nums[i] );
                i++;
            }
        }

        while( i <= mid ){

            temp.push_back(nums[i]);
            i++;
        }

        while( j <= end ){

            temp.push_back(nums[j]);
            j++;
        }

        int idx = 0;

        for( idx ; idx < temp.size() ; idx++ ){

            nums[idx + start] = temp[idx];
        }


    }

    void mergeSort( vector<int> &nums , int start , int end , int &count ){

        if( start >= end ){

            return;
        }

        int mid = start + ( end - start )/2;

        mergeSort( nums , start , mid , count );

        mergeSort( nums , mid + 1 , end , count );

        merge( nums , start , end , mid , count );



    }


    int reversePairs(vector<int>& nums) {

        int start = 0;
        int end = nums.size()-1;
        int count = 0;

        mergeSort( nums , start , end , count );

        return count;




        

    }
};