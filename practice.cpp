#include<iostream>
using namespace std;
int main(){
    int a,ON,ARM=0,digit;
    cout<<"entr your number of term you want to print"<<endl;
    cin>>a;
    ON=a;
  while(a>0)
  {
    digit=a%10;
    ARM=ARM+(digit*digit*digit);
    a/=10;

  }
    cout<<((ARM==ON)?"armstronng":" non armstrong");
    
}

