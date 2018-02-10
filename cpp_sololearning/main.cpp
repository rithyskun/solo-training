/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: macbookpro
 *
 * Created on February 8, 2018, 9:20 PM
 */

#include <cstdlib>
#include <iostream>


using namespace std;
int menu;

void products() {
    cout << "Product 1";
}

void services() {
    cout << "Service 1";
}

void supports() {
    cout << "Support 1";
}

int main() {

    cout << "*** Welcome to CCPL training course *** \n"
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

