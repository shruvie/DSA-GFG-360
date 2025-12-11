class Solution {
public:
    int powMod(int x, int n, int M) {
        long long res = 1;
        long long base = x % M;

        while(n > 0){

            if(n & 1){
                res = (res * base) % M;
            }

            base = (base * base) % M;
            n /= 2;
        }
        return res;
    }
};
