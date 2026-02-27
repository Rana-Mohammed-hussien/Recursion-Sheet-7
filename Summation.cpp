#include <iostream>
#include <vector>
using namespace std;

long long sumArray(vector<long long>& arr, int index) {
    if (index < 0) return 0;
    return arr[index] + sumArray(arr, index - 1);
}

int main() {
    int N;
    cin >> N;
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    cout << sumArray(arr, N - 1) << endl;
    return 0;
}