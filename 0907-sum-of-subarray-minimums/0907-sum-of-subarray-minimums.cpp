class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        long long int sum = 0;

        int size = arr.size();

        stack<int> next;

        vector<int> nextIndex( size , size );

        for( int i = size-1 ; i >= 0 ; i-- ){

            while( !next.empty() && arr[i] <= arr[next.top()] ){

                next.pop();

            }

            if( !next.empty() && arr[i] > arr[next.top()] ){

                nextIndex[i] = next.top();

            }

            next.push(i);
        }

        stack<int> prev;

        vector<int> prevIndex( size , -1 );

        for( int j = 0 ; j < size ; j++ ){

            while( !prev.empty() && arr[j] < arr[prev.top()] ){

                prev.pop();


            }

            if( !prev.empty()  ){

                prevIndex[j] = prev.top();
            } 

            prev.push(j);
        }

        for( int k = 0 ; k < size ; k++ ){

            int left = k - prevIndex[k];
            int right = nextIndex[k] - k;

            sum += (long long)left*right*arr[k]%1000000007;



        }

        return sum%1000000007;

        
    }
};