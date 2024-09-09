#include <vector>
using namespace std;
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> PreSum(n + 1);
        PreSum[0] = 0;
        for (int i = 0; i < n; i++) {
            PreSum[i + 1] = PreSum[i] + arr[i];
        }
        int sum = 0;
        for (int start = 0; start < n; start++) {
            for (int length = 1; start + length <= n; length += 2) {
                int end = start + length - 1;
                sum += PreSum[end + 1] - PreSum[start];
            }
        }
        return sum;
    }
};