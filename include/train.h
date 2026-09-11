#include <vector>
#include "people.h"
#include "objects.h"
#pragma once
using namespace std;

struct vagon{
    int health;
};

struct train {
    int NunPeople;
    int health;
    int fuel;

    vector<vagon> vagony;
    vector<people> peoples;
};
