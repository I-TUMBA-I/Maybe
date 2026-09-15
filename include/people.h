#pragma once
#include <string>
using namespace std;

struct people{
    string name;
    int health;
    int engeneering;
    int med;
    int cook;
    int strength;
    bool man;
};

void full(vector<people> &ful){
    for(size_t i = 0; i < 11; i++){
        people p;
        p.engeneering = rand() % 101;
        p.man = rand() % 2;
        p.med = rand() % 101;
        p.health = 100;
        p.cook = rand() % 101;
        p.strength = rand() % 101;
        ful.push_back(p);
    }
}
