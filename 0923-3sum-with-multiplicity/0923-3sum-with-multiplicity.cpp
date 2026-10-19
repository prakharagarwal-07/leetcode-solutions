class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {

        sort( arr.begin() , arr.end() );

        long long int count = 0;

        for( int i = 0 ; i < arr.size() ; i++ ){

            int left = i+1;
            int right = arr.size()-1;

            

            while( left < right ){

                int sum = arr[i] + arr[left] + arr[right];

                if( sum > target ){

                    right--;
                }

                else if( sum < target ){

                    left++;
                }

                else{

                    int leftNo = 1;
                    int rightNo = 1;

                      if( arr[left] == arr[right] ){

                        int n = right - left + 1;

                        count += 1LL*n*(n-1)/2;

                        break;

                    }



                    while( left < right && arr[left+1] == arr[left] ){

                        leftNo++;
                        left++;

                    }

                    while( left < right && arr[right-1] == arr[right] ){

                        rightNo++;
                        right--;

                    }

                    count += 1LL*leftNo*rightNo;
                    left++;
                    right--;

                  

                   
                }





            }
        }

        return count%1000000007;
        
    }
};