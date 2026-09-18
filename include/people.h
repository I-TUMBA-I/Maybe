#pragma once
#include <cstdlib>
#include <random>
#include <cstddef>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

struct people{
    string name;
    int health;
    int engeneering;
    int med;
    int cook;
    int strength;
    bool sex;
};

string randNameG(){
    ifstream file("include/nameG.txt");
    if(!file.is_open()){
        cout << "Can not open file! The file is missing";
        return "No";
    }
    string line;
    vector<string> names;
    while (getline(file, line)){
        names.push_back(line);
    }
    return names[rand() % names.size()];
}

string randNameB(){
    ifstream file("include/nameB.txt");
    if(!file.is_open()){
        cout << "Can not open file! The file is missing";
        return "No";
    }
    string line;
    vector<string> names;
    while (getline(file, line)){
        names.push_back(line);
    }
    return names[rand() % names.size()];
}

void full(vector<people> &ful, int coun){
    for(int i = 0; i < coun; i++){
        people p;
        p.engeneering = rand() % 101;
        p.sex = rand() % 2;
        p.med = rand() % 101;
        p.health = 100;
        p.cook = rand() % 101;
        p.strength = rand() % 101;
        switch (p.sex){
            case 1:
                p.name = randNameB();
                break;
            case 0:
                p.name = randNameG();
                break;
        }
        ful.push_back(p);
    }
}
