#pragma once
#include <chrono>
#include <thread>
#include <iostream>


void clearScreen() {
    std::cout << "\033[H\033[2J" << std::flush;
}

void times(int sec){
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}
