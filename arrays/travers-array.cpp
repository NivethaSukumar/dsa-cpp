#include <iostream>

using namespace std;

/*
Big O = O(n)
*/
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}