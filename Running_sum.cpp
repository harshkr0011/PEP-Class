#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = 4;

    for (int i = 1; i < n; i++) {
        nums[i] = nums[i] + nums[i - 1];
    }

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
