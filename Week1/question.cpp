#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ing long long 

bool canCompleteInHours(vector<int>& donations, int k, int n) {
    int hours_needed = 0;
    for (int i = 0; i < donations.size(); i++) {
        hours_needed += (donations[i] + k - 1) / k;  // This is ceiling division
        if (hours_needed > n) return false;  // Early exit if hours exceed available hours
    }
    return hours_needed <= n;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, length;
        cin >> n >> length;
        vector<int> donations(length);
        for (int i = 0; i < length; i++) {
            cin >> donations[i];
        }
        
        int low = 1;
        int high = *max_element(donations.begin(), donations.end());
        int answer = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canCompleteInHours(donations, mid, n)) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        cout << answer << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
