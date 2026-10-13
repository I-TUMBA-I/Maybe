#pragma once
#include <chrono>
#include <immintrin.h>
#include <iterator>
#include <thread>
#include <iostream>


void clearScreen() {
    std::cout << "\033[H\033[2J" << std::flush;
}

void sec(float sec) {
    std::this_thread::sleep_for(std::chrono::duration<float>(sec));
}

void text_time(string text, int tick){
    float delay = 1.0f / tick;
    for(size_t i = 0; i<text.size(); i++){
        cout << text[i];
        sec(delay);
    }
}
