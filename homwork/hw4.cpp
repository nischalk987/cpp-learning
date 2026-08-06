#include<iostream>
using namespace std;

int main () {

    char ch ;
    cout << "Enter a character: " << " ";
    cin >> ch ;

    if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    }
    else {
        cout << "The character is not a lowercase letter." << endl;
    }

}