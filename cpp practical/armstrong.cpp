#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

int x = n;
int d = 0;
while (x > 0) {
    d++;
    x /= 10;
}

int y = n;
int sum = 0;
while (y > 0) {
    int r = y % 10;

    int p = 1;
    for (int i = 0; i < d; i++)
        p = p * r;

    sum = sum + p;
    y = y / 10;
}

if (sum == n)
    cout << "Yes";
else
    cout << "Not";

return 0;


}
