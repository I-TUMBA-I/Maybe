#include <cstddef>
#include <ctime>
#include <float.h>
#include <string>
#include "../include/train.h"
#include "../include/add.h"
#include "../include/ui.h"
using namespace std;

int main(){
    string ans;
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
    clearScreen();
    text_time("This game is about surviving in train, when its zombie appocalyppse", 14);
    cout << '\n';
    sec(1.5f);
    text_time("All the persons with you in normal condition", 14);
    sec(1.0f);
    cout << '\n';
    text_time("Or is they?", 20);
    clearScreen();
    login();
}
