#include <iostream>
using namespace std;
// int main (){
//     int minOfTwo(int a, int b){  //parameter
//         if(a>b){
//             return b;

//         }
//         else{
//         return a;
//         }
//     }
// int main(){
//     cout<<"min = "<<minOfTwo(9,5)<<endl;//argument
// return 0;
// }

// function to calculate the sum/multiplication upto n terms

// int SumN(int n)
// {
//     int sum = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         sum *= i;
//     }
//     return sum;
// }

// int main()
// {
//  int n;
//     cout<<"enter the value of n : " ;
//     cin>>n;

//     cout << "sum upto n terms  : " << SumN(n);
// }

// function to check the number is odd or even

// string CheckEvenOdd(int a)
// {
//     if (a % 2 == 0)
//     {
//         return "even";
//     }
//     else
//     {
//         return "odd";
//     }
// }

// int main()
// {
//     int a;
//     cout << "enter the value of a : ";
//     cin >> a;

//     cout << CheckEvenOdd(a);
// }

// for calulcalation of nCr
// int Factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int nCr(int n, int r)
// {
//     int _n = Factorial(n);
//     int _r = Factorial(r);
//     int _nmr = Factorial(n - r);

//     return (_n) / (_r * _nmr);
// }
// int main()
// {
//     int a, b;
//     cout << "enter the value of n : " << endl;
//     cin >> a;
//     cout << "enter the value of r :  " << endl;
//     cin >> b;
//     cout << "value of nCr is : " << nCr(a, b);
// }
//  function for checking prime number

// string CheckPrime(int m)
// {

//     for (int i = 2; i < m; i++)
//     {
//         if (m % i == 0)
//         {
//             return "not prime";
//         }
//         else
//         {
//             return "prime";
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter your number : ";
//     cin >> n;
//     cout <<CheckPrime(n);
// }

// function to print fibonacci series
int PrintFibonacci(int n)
{
    int a = 0, b = 1, fib;

    cout << a << " ";
    cout << b << " ";
    for (int i = 3; i < n; i++)
    {
        fib = a + b;
        cout<<fib<<" ";
        a = b;
        b = fib;
    }
    
}
int main()
{
    int n;
    cout << "enter tthe value of term" << endl;
    cin >> n;
    cout << PrintFibonacci(n);
}