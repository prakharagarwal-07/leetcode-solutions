class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map< char , int > freq;

        int count = INT_MAX;

        for( int i = 0 ; i < text.size() ; i++ ){

            freq[text[i]]++;

            
        }

        count = min( freq['b'] , count );
        count = min( freq['a'] , count );
        count = min( (freq['l'])/2 , count );
        count = min( (freq['o'])/2 , count );
        count = min( freq['n'] , count );

        

       

        return count;
        
        
    }
};