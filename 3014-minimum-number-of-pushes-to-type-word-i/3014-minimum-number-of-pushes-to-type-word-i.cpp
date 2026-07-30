class Solution {
public:
    int minimumPushes(string word) {

        int size = word.size();
        int blocks = size/8;
        int remaining = size%8;

        return ( ((blocks*(blocks+1)/2) * 8 ) + remaining*(blocks+1) );
        
    }
};