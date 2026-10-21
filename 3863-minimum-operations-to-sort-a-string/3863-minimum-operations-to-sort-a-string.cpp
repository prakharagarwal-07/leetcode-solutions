class Solution {
public:
    int minOperations(string s) {

        int size = s.size();

       

        if( size == 1 ){

            return 0;

        }

        unordered_map<char , int> freq;

       

        char maxChar = 'a';
        int maxIndex = -1;

        char minChar = 'z';
        int minIndex = -1;

        for( int i = 0 ; i < size ; i++ ){

            freq[s[i]]++;

            if( s[i] > maxChar ){

                maxChar = s[i];
                maxIndex = i;
            }

            else if( s[i] == maxChar ){

                maxIndex = max( maxIndex , i );
            }

            if( s[i] < minChar ){

                minChar = s[i];
                minIndex = i;
            }

            else if( s[i] == minChar ){

                minIndex = min( minIndex , i );
            }


        }

        if( freq[s[0]] == size ){

            return 0;
        }

        bool isSorted = true;

        for( int j = 0 ; j < size-1 ; j++ ){


                if( s[j] > s[j+1] ){

                    isSorted = false;
                }
            }

            

             if( size == 2 ){

                if( isSorted ){

                    return 0;
                }

            return -1;
        }

            if( minIndex == size-1 && maxIndex == 0 ){

                return 3;
            }

        if( minIndex == 0 && maxIndex == size-1 ){

            if( isSorted ){

                return 0;
            }

            else{

                return 1;
            }

            


        }

        if( minIndex == 0 || maxIndex == size-1 ){

            return 1;
        }

        if( minIndex != 0 && maxIndex != size-1 ){

            return 2;
        }

        return -1;

        

       

       
        
    }
};