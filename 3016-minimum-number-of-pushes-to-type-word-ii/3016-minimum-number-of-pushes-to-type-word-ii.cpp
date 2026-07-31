class Solution {
public:
    int minimumPushes(string word) {

        vector<int> freq(26 , 0);

        for( char val: word ){

            freq[val - 'a']++;
        }

        sort( freq.begin() , freq.end() , greater<int>() );

        int push = 0;


        for( int i = 0 ; i < 26 ; i++ ){

            push = push + freq[i]*( i/8 + 1 );

            
        }

        return push;
        
    }
};