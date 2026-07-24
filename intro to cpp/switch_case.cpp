#include<iostream>
using namespace std ; 

int main() {

    char grade;
    cout << "Enter your Grade : " << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    default:
        break;
    }

    return 0 ;
}