#include<iostream>
using namespace std ; 

int main() {

    // for loop

    // for (int i = 1; i<=10 ; i=i+1){
    //     cout  << "Hello word " <<  endl; 
    // }

    //continue keyword

    // for (int i = 1 ; i <= 5 ; i = i+1){
    //     if (i==3) {
    //         continue;
    //     }
    //     cout << "Iteration " << i << endl;
    // }


    // Break keyword 

    // for (int i =1 ; i <=5 ; i = i+1) {
    //     if(i==4){
    //         break;
    //     }
    //     cout << "Iteration = " << i << endl ; 
    // }

    // while loop 

    // int i = 1;
    // while (i <= 5) {
    //     cout << i << " " ;
    //     i = i + 1 ;
    // }
    
    // do while loop

    // int i = 1 ;
    // do {
    //     cout << i << " ";
    //     i = i + 1 ;
    // }while(i<= 5);

    // nested loop 

    for (int i = 1 ; i <= 3 ; i = i+1) {
        for (int j = 1 ; j <=3 ; j = j + 1) {
            cout << "i : " << i << " " << "j :" << j << endl ;
        }
    }

    return 0 ;
}

