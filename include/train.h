#pragma once
#include <string>
#include <vector>
#include "people.h"
#include "objects.h"
using namespace std;

struct vagon{
    string name;
    int weight;
};

struct Mediki : vagon{
    int maxMed;
    int MaxPeople;
};

struct CarryWag : vagon{
    int maxWeight;
    int stackNum;
    vector<obj> objects;
};

struct PeopleWag : vagon{
    int maxPeople;
    vector<people> peoples;
};

struct train {
    int NumPeople;
    int health;

    vector<vagon> vagony;
};
