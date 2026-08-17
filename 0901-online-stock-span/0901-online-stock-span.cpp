class StockSpanner {
public:

     
    stack<pair<int,int>> prevHigh;

    StockSpanner() {
        
    }
    
    int next(int price) {

        int span = 1;

        while( !prevHigh.empty() && prevHigh.top().first <= price ){

            span += prevHigh.top().second;
            prevHigh.pop();

        }

        prevHigh.push({price,span});

        return span;




        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */