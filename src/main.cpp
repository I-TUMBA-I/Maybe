#include <iostream>
#include <random>
#include <time.h>
#include "../include/train.h"
using namespace std;

int main(){
    srand(time(NULL));
    train t;
    vector<people> tr;
    full(tr);
    t.peoples = tr;
}
