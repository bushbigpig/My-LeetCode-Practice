#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        digits[length - 1] += 1;
        for (int i = length - 1; i >= 1; i--) {
            if (digits[i] >= 10) {
                digits[i] %= 10;
                digits[i - 1] += 1;
            }
        }
        if (digits[0] == 10) {
            digits.push_back(0);
            for (int i = digits.size() - 1; i >= 2; i--) {
                digits[i] = digits[i - 1];
            }
            digits[1] = 0;
            digits[0] = 1;
        }
        return digits;
    }
};