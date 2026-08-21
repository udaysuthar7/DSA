class Solution {
public:
    bool isPowerOfThree(int n) {
        int i=0;
        for (int i=0;i<=19;i++){
            int ans = pow(3,i);

            if(n==ans){
                return true;
            }
        }
        return false;
    }
};