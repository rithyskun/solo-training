
/* 
 * File:   main.cpp
 * Author: macbookpro
 *
 * Created on February 8, 2018, 9:20 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void products() {
    cout << "Product 1";

}

void services() {
    int x;
    int y;
    int array[8][8]; // Declares an array like a chessboard

    for (x = 0; x < 8; x++) {
        for (y = 0; y < 8; y++)
            array[x][y] = x * y; // Set each element to a value
    }
    cout << "Array Indices:\n";
    for (x = 0; x < 8; x++) {
        for (y = 0; y < 8; y++)
            cout << "[" << x << "][" << y << "]=" << array[x][y] << " ";
        cout << "\n";
    }
}


void supports() {
    cout << "Support 1";
}

int main() {
    int menu;
    cout << "*** Welcome to training course *** \n"
            << "1. Products\n"
            << "2. Services\n"
            << "3. Support \n"
            << "4. Exit\n"
            << "Please choice number: ";
    cin>>menu;
    switch (menu) {
        case 1:
            products();
            break;
        case 2:
            services();
            break;
        case 3:
            supports();
            break;
        case 4:
            cout << "Thank you for using our service, good bye!" << endl;
            exit(0);
        default:
            cout << "Error, please choice the correct Menu: \n" << endl;
            return main();
    }

    return 0;
}

