#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

int main() {
    srand(time(NULL));
    int arr[1000], sum = 0, max_val = INT_MIN, idx = 0, n=10;

    for (int i = 0; i < 1000; i++) {
        arr[i] = rand();
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    max_val = sum;

    for (int i = 1; i < 1000-n+1; i++) {
        sum += arr[i + n -1] - arr[i - 1];

        if (sum > max_val) {
            max_val = sum;
            idx = i;
        }
    }

    cout << "The max value for consecutive 3 elements of the array is: " << max_val << " & the index of the last element is " << idx << endl;

    return 0;
}
