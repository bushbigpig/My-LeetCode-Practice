#include <math.h>
#include <climits>
class Solution {
    int arr[105];
public:
    int reverse(int x) {
        int flag = 0;
        if (x < 0) {
            flag = -1;
        }
        x = abs(x);
        int i = 0;
        while (x) {
            int t = x % 10;
            x /= 10;
            arr[i] = t;
            i++;
        }
        int left = 0;
        int right = i - 1;
        long sum = 0;
        for (int j = 0; j <= i - 1; j++) {
            sum = sum * 10 + arr[j];
        }
        if (flag == -1) {
            sum = -sum;
        }
        if (sum > INT_MAX || sum < INT_MIN) {
            return 0;
        }
        else
        {
            return sum;
        }
    }
};