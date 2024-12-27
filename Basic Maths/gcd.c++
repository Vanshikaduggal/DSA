#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }

    cout << n; // n now contains the GCD
    return 0;
}
