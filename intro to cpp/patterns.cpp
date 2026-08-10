#include<iostream>
using namespace std ;

int main () {

    // Square Patterns 

    // int n = 4 ;
    // for(int i = 1 ; i <=n ; i++){
    //     for (int j =1 ; j<=n ; j++) {
    //         cout << j << " " ;
    //     }
    //     cout << endl ; 
    // }

    // * Paterns 

    // int n = 6 ;
    // for (int i =1 ; i <=n ; i++) {
    //     for (int j = 1 ; j<=n ; j++) {
    //         cout << "*" << " " ;
    //     }
    //     cout << endl ; 
    // }

    // int  n =  6 ;
    // for (int i = 1 ; i <=n ; i++) {
    //     for (char j = 'a' ; j<= 'd' ; j++) {
    //         cout << j  << " " ;
    //     }
    //     cout << endl ; 
    // }

    // output : 
    // 1 2 3
    // 4 5 6

    int n = 6 ;
    int num = 1 ; 

    for (int i = 1 ; i <=n ; i++) {
        for (int j =1 ; j<=n ; j++ ) {
            cout << j+1 << " " ;
        }
        cout << endl ;
    }
}
