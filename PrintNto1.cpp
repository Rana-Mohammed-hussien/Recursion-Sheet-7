#include <iostream>
using namespace std;

void printNto1(int n) {
    if (n == 0) return;
    cout << n;
    if (n > 1) cout << " ";
    printNto1(n - 1);
}

int main() {
    int N;
    cin >> N;
    printNto1(N);
    cout << endl;
    return 0;
}