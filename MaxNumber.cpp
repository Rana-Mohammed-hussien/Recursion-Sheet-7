#include <iostream>
#include <vector>
using namespace std;

long long findMax(vector<long long>& arr, int index) {
    if (index == 0) return arr[0];
    long long maxSoFar = findMax(arr, index - 1);
    return arr[index] > maxSoFar ? arr[index] : maxSoFar;
}

int main() {
    int N;
    cin >> N;
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    cout << findMax(arr, N - 1) << endl;
    return 0;
}