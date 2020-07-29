#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

void Reverse(char C[], int n){

    stack<char> S;
    for(int i = 0; i < n; i++) {
        S.push(C[i]);
    }
    for (int i = 0; i < n; i++) {
        C[i] = S.top();
        S.pop();
    }

}

int main() {
    char C[51];
    cout << "Enter a string: ";
    cin >> C;
    Reverse(C, strlen(C));
    cout << "Output string is " << C;
}