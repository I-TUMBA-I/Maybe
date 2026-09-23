#pragma once
#include <string>
#include <vector>
#include "people.h"
#include "objects.h"
using namespace std;

struct vagon{
    int weight;
    int MaxPeople;
};

struct MedikiWag : vagon{
    int maxMed;
};

struct CarryWag : vagon{
    int maxWeight;
    int stackNum;
    vector<obj> objects;
};

struct PeopleWag : vagon{
    vector<people> peoples;
};

struct Train {
    int health;
};
