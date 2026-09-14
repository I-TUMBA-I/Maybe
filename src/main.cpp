#include <iostream>
#include <random>
#include "../include/train.h"
#include "../include/add.h"
using namespace std;

int main(){
    srand(time(NULL));
    train t;
    vector<people> tr;
    full(tr);
    t.peoples = tr;
}
