#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of array elements = " << sum << endl;

    return 0;
}