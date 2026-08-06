#include<iostream>
using namespace std;

int main () {

    char ch ;
    cout << "Enter a character: " << " ";
    cin >> ch ;

    if (ch >= 97 && ch <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    }
    else {
        cout << "The character is a uppercase  letter." << endl;
    }

}
