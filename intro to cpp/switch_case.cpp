#include<iostream>
using namespace std ; 

int main() {

    char grade;
    cout << "Enter your Grade : " << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':cout << "90 to 100 " << endl;
    case 'B':cout << "90 to 100 " << endl;
    case 'C':cout << "90 to 100 " << endl;
    case 'D':cout << "90 to 100 " << endl;
    default:
        break;
    }

    return 0 ;
}