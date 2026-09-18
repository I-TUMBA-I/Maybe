#pragma once
#include <string>
#include <vector>
#include "people.h"
#include "objects.h"
using namespace std;

class carriagi{
    public:
        string name;
        int weight;
};

class Mediki : public carriagi{
    public:
        int maxMed;
        int MaxPeople;
};

class CarryWag : public carriagi{
    public:
        int maxWeight;
        int stackNum;
};

class PeopleWag : public carriagi{
    public:
        int maxPeople;
};

class train {
public:
    int NumPeople;
    int health;
    int fuel;
    int capasity;

    vector<obj> objects;
    vector<vagon> vagony;
    vector<people> peoples;
};
