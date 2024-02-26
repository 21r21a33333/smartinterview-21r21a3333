
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

#define ull uint64_t

void count_sort(vector<int> &arr, const int MAX) {
    vector<int> count(MAX, 0);
    for(ull i = 0; i < arr.size(); ++i)
        count[arr[i]]++;
    
    int idx = 0;
    for(int i = 0; i < MAX; ++i)
        if(count[i]) 
            for(int j = 0; j < count[i]; ++j)
                arr[idx++] = i;
}

ull power_game(vector<int> &a, vector<int> &b, const int &maxA, const int &maxB) {
    count_sort(a, maxA+1);
    count_sort(b, maxB+1);
    
    ull size = a.size(), count = 0; 
    for(int i = (int)size-1, j = i; i >= 0 && j >= 0; --j)
        if(a[i] > b[j]) { ++count; --i; }
    
    return count;
}

int main() {
    ull t;  cin >> t;
    while(t--) {
        ull n;  cin >> n;
        
        vector<int> a(n), b(n);
        int maxA, maxB; maxA = maxB = INT_MIN;
        for(ull i = 0; i < n; ++i) {
            cin >> a[i];
            maxA = max(maxA, a[i]);
        }
        
        for(ull i = 0; i < n; ++i) {
            cin >> b[i];
            maxB = max(maxB, b[i]);
        }
        
        cout << power_game(a, b, maxA, maxB) << endl;
    }
    return 0;
}