class Solution {
public:
    int reverse(int x) {
        long long int num=0;
        while(x!=0)
        {
            num*=10;
            if(num>INT_MAX || num<INT_MIN) return 0;
            num+=x%10;
            x/=10;
        }
        return num;
    }
};
