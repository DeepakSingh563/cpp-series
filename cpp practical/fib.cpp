#include<iostream>
using namespace std;

  
int main() {
int n;
cin >> n;

int a = 0, b = 1;
cout << a << " " << b;

int c = a + b;
while (c <= n) {
    cout << " " << c;
    a = b;
    b = c;
    c = a + b;
}



}

