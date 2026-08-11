#include<iostream>
using namespace std ; 

void sumofnum(int n) {
    int sum = 0 ; 
    for(int i = 1 ; i <= n ; i++) {
        sum += i ; 
    }
    cout << "The sum of first " << n << " natural numbers is : " << sum << endl ; 
}