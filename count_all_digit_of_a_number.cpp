class Solution {
public:
    int countDigit(int n) {
    int countDigit=0;
    while (n>0){
        int lastdigit=n%10;
        countDigit=countDigit+1;
        n=n/10;
    }
    return countDigit;
    }
};