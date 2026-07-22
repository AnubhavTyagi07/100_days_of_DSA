#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i < n; i++) {

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
        cout << "No second smallest element exists.";
    else
        cout << "Second Smallest Element = " << secondSmallest;

    return 0;
}