#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;


int a[n];
for (int i = 0; i < n; i++)
    cin >> a[i];

int key;
cin >> key;

int l = 0, r = n - 1, pos = -1;

while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] == key) {
        pos = m + 1;
        break;
    }
    if (a[m] < key)
        l = m + 1;
    else
        r = m - 1;
}

cout << pos;
return 0;


}
