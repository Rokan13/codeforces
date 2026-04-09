#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int upper_count = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper_count++;
        }
    }

    if (upper_count == n - 1) {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            } else {
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}
