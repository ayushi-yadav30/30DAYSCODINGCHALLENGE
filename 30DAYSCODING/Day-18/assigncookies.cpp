#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0; 
    int j = 0; 

    while (i < g.size() && j < s.size()) {
        if (s[j] >= g[i]) {
            i++; 
        }
        j++;
    }

    return i;
}

int main() {
    int n, m;

    cout << "Enter number of children: ";
    cin >> n;
    vector<int> g(n);

    cout << "Enter greed factors: ";
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }

    cout << "Enter number of cookies: ";
    cin >> m;
    vector<int> s(m);

    cout << "Enter cookie sizes: ";
    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }

    int result = findContentChildren(g, s);
    cout << "Maximum satisfied children: " << result << endl;

    return 0;

}
