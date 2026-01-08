#include <iostream>
using namespace std;

bool Is_Prime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main(){
   Is_Prime(5);
}
