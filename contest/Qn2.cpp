// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Input number of integers
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];  // Input array of integers
//     }
//     for (int i = 0; i < n; i++) {
//         int divisor = 2;
//         while (divisor <= arr[i]) {
//             if (arr[i] % divisor == 0) {
//                 arr[i] /= divisor;  // Divide by divisor
//             } else {
//                 divisor++;  // Try next divisor
//             }
//         }
//         cout << arr[i] << " ";  // Output modified integer
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int prod = 1;
    for(int i=0; i<n; i++) {
        prod *= arr[i];
    }
    for(int i=0; i<n; i++) {
        cout << prod / arr[i] << " ";
    }
    return 0;
}
