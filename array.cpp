#include <iostream>
using namespace std;
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     int smallest = arr[0];
//     int loc=0;
//     for (int i = 0; i < 5; i++)
//     {

//         smallest = min(arr[i], smallest);
//         loc=i;
//     }
//     cout<<smallest<<" "<<loc<<" ";
// }

 void changeArr(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
 }
 int main(){
    int arr[]={1,2,3};
    changeArr( arr,3);
    for(int i=0;i<3;i++){
    cout<<arr[i]<<"  ";
    }
 }