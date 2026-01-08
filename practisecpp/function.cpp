#include <iostream>
using namespace std;

// void change(int x)
// {
//     x = 20;
// }
// int main(){
//     int a=10;
//     change(a);
//     cout<<a;
// }



// Recursive Function

int fact(int n){
    if(n==0){
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

int main(){
    int y;
    cin>>y;
  int x=fact(y);
  cout<<x;
}