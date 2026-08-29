class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {


        stack<int> s;

        for( int i = 0 ; i < asteroids.size() ; i++ ){

            bool survive = true;

            while( !s.empty() && s.top() > 0 && asteroids[i] < 0 ){

                if( abs(s.top()) < abs(asteroids[i]) ){

                    s.pop();

                }

                else if( abs(s.top()) == abs(asteroids[i])){

                    s.pop();
                    survive = false;
                    break;

                }

                else{

                    survive = false;

                    break;
                }

            }

                if( !survive ){

                    continue;
                }

              

                s.push(asteroids[i]);


            
        }

        vector<int> ans( s.size() , 0 );
        int k = s.size()-1;

       while( !s.empty() ){

        ans[k] = s.top();
        s.pop();
        k--;


       }

       return ans;
        
    }
};