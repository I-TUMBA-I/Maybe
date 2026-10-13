#pragma once
#include <cstdio>
#include <iostream>
#include <string>

char login(){
    cout << "1.Start Game (automaticly saves)\n"
    << "2.Settings (no settings in beta)\n"
    << "3.Quit the Game";
    char ans = getchar();
    return ans;
}

void settings(){
    cout << "Open settings!";
}
