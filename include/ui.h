#pragma once
#include <cstdio>
#include <iostream>
#include <set>
#include <string>
#include "add.h"
using namespace std;;

void settings();

string login(){
    string ans;
    cout << "\tWelcome!\n"
    << "1.Start the game\n"
    << "2.Settings\n"
    << "3.Quit\n";
    cin >> ans;
    switch (stoi(ans)){
        case 1:
            return "Start";
            break;
        case 2:
            settings();
            clearScreen();
            return login();
            break;
        case 3:
            cout << "Quiting";
            break;
    }
}

void settings(){
    cout << "Open settings!";
}
