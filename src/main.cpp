#include <cstddef>
#include <ios>
#include <iostream>
#include <iterator>
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
    for(size_t i = 0; i < t.peoples.size(); i++){
        cout << t.peoples[i].name << '\n';
        cout << t.peoples[i].engeneering << '\n';
        cout << t.peoples[i].med << '\n';
        cout << t.peoples[i].cook << '\n';
        cout << t.peoples[i].strength << '\n';
        cout << "Sex: " << boolalpha << t.peoples[i].man << '\n';
        cout << '\n';
    }
}
