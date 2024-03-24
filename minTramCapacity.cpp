#include <iostream>
#include <vector>

using namespace std;

int minTramCapacity(int n, const vector<int>& a, const vector<int>& b) {
    int currPassengers = 0;
    int maxPassengers = 0;
    
    for (int i = 0; i < n; i++) {
        // Passengers exit the tram
        currPassengers -= a[i];
        
        // Passengers enter the tram
        currPassengers += b[i];
        
        // Update the maximum number of passengers
        maxPassengers = max(maxPassengers, currPassengers);
    }
    
    return maxPassengers;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    cout << minTramCapacity(n, a, b) << endl;
    
    return 0;
}