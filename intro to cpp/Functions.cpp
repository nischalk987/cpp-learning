#include<iostream>
using namespace std ; 

// int sumofnum(int n) {
//     int sum = 0 ; 
//     for(int i = 1 ; i <= n ; i++) {
//         sum += i ; 
//     }
//     return sum ;
// }

int factorial (int n) {
    int fact = 0 ;
    for (int i = 0 ; i < n ; i++) {
        fact = fact * i ;
    }
    return fact 
}

int main () {
    
    int n ; 
    cout << "Enter a number : " ; 
    cin >> n ; 

    cout << "The sum of first " << n << " numbers is : " << sumofnum(n) << endl ; 

    return 0 ;
}


