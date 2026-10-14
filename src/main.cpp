#include <cstddef>
#include <ctime>
#include <float.h>
#include <string>
#include "../include/train.h"
#include "../include/add.h"
#include "../include/ui.h"
using namespace std;
using str = string;

int main(){
    clearScreen();
    bool isFirst;
    str ans;
    Train train;
    MedikiWag Med;
    CarryWag inv;
    PeopleWag Peop;
    srand(time(NULL));
    vector<people> tr;
    full(tr, 11);
    train.health = 100;
    Med.maxMed = 50;
    Peop.peoples = tr;
    Peop.MaxPeople = 15;
    if(!isFirst){
        text_time("This game is terminal simulator of surviving in train while there is appocalypse outside.", 14);
        cout << '\n';
        sec(1.5f);
        text_time("You are *** of a train that main goal is saving as much people as you can.", 15);
        cout << '\n';
        sec(2.0f);
        text_time("All your people are fully healthy and can be using as working power.", 13);
        cout << '\n';
        sec(1.0f);
        text_time("Good luck", 10);
        cout << '\n';
        sec(4.0f);
        clearScreen();
    }

}
