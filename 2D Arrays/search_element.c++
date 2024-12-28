
#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Enter element to be searched : ";
    int x;
    cin >> x;

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == x) {
                cout << "Element found\n";
                found = true;
                break;
            }
        }
        if (found) break; 
    }
    
    if (!found) {
        cout << "Not Found\n";
    }

    return 0;
}
