#include <iostream>
#include <vector>
using namespace std;

void printEvenReversed(vector<long long>& arr, int index) {
    if (index < 0) return;
    if (index % 2 == 0) cout << arr[index] << " ";
    printEvenReversed(arr, index - 1);
}

int main() {
    int N;
    cin >> N;
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    printEvenReversed(arr, N - 1);
    cout << endl;
    return 0;
}