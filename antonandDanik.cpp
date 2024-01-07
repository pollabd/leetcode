#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> results(n);

    for (int i = 0; i < n; i++) {
        cin >> results[i];
    }

    int countAnton = 0;
    int countDanik = 0;

    for (char result : results) {
        if (result == 'A') {
            countAnton++;
        } else {
            countDanik++;
        }
    }

    if (countAnton > countDanik) {
        cout << "Anton" << endl;
    } else if (countAnton < countDanik) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
