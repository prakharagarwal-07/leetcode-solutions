class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<int , int> freq;

        for( int i = 0 ; i < s.size() ; i++ ){

            freq[s[i]]++;

        }

        for( int j = 0 ; j < s.size() ; j++ ){

            if( freq[s[j]] == 1 ){

                return j;
            }

        }

        return -1;
        
    }
};