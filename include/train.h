#pragma once
#include <vector>
#include "people.h"
#include "objects.h"

using namespace std;

struct vagon{
    int health;
};

struct train {
    int NumPeople;
    int health;
    int fuel;
    int capasity;

    vector<obj> objects;
    vector<vagon> vagony;
    vector<people> peoples;
};
