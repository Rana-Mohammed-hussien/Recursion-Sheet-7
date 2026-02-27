#include <iostream>
using namespace std;

void printMessage(int n) {
    if (n == 0) return;
    cout << "I love Recursion" << endl;
    printMessage(n - 1);
}

int main() {
    int N;
    cin >> N;
    printMessage(N);
    return 0;
}