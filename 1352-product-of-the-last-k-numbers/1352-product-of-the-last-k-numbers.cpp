class ProductOfNumbers {
public:

vector<int> a;

    ProductOfNumbers() {

        
        
    }
    
    void add(int num) {

        a.push_back(num);

        
        
    }
    
    int getProduct(int k) {

        int prod = 1;

        int n = a.size();

        for( int i = n-1 ; i >= n-k ; i-- ){

            int currNum = a[i];

            prod *= currNum;
        }

        return prod;

        
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */