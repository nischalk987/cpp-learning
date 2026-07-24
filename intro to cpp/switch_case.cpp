#include<iostream>
using namespace std ; 

int main() {

    char grade;
    cout << "Enter your Grade : " << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':cout << "90 to 100 " << endl;
    case 'B':cout << "80 to 90 " << endl;
    case 'C':cout << "70 to 80 " << endl;
    case 'D':cout << "60 to 70 " << endl;
    default:
        cout << "0 to 100 " << endl;
        break;
    }

    return 0 ;
}