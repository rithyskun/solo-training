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

int main(int argc, char** argv) {
    cout << "*** Welcome to CCPL training course *** \n"
            << "1. Products\n"
            << "2. Services\n"
            << "3. Support \n"
            << "4. Exit\n"
            <<"Please choice number: ";
    cin>>menu;
    switch (menu) {
        case 1:
            cout << "Case 1";
            break;
        case 2:
            cout << "Case 2";
            break;
        case 3:
            cout << "Case 3";
            break;
        default:
            cout << "Close";
            break;
    }
    
    return 0;
}
