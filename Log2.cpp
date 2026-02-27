#include <iostream>
using namespace std;

long long log2Recursive(long long n) {
    if (n == 1) return 0;
    return 1 + log2Recursive(n / 2);
}

int main() {
    long long N;
    cin >> N;
    cout << log2Recursive(N) << endl;
    return 0;
}