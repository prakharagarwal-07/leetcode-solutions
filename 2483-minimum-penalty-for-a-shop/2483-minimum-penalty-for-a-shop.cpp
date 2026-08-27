class Solution {
public:
    int bestClosingTime(string customers) {

        int size = customers.size();

        int minHr = 0;

        

        int numberY = 0;

       

       

        for( int i = 0 ; i < size ; i++ ){

            if( customers[i] == 'Y' ){

                numberY++;

            }

        }

        int currPen = numberY;
        int minPen = numberY;
        



        for( int j = 0 ; j < size ; j++ ){

            if( customers[j] == 'Y' ){

                currPen--;
            }

            if( customers[j] == 'N' ){

                currPen++;
            }

            if( currPen < minPen ){

                minPen = currPen;
                minHr = j+1;
            }

         

        }

            
          

        return minHr;
        

       
       
       


        
    }
};