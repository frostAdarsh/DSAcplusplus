class Solution {
public:
    int mySqrt(int x) {
        long start = 1, end = x;
        long mid;

        while (start <= end) {
            mid = start+(end-start)/2;
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid < x) {
                start = mid + 1;

            } else {

                end = mid - 1;
            }
        }
        return end;
    }
};