#include <cstddef>
#include <ctime>
#include "../include/train.h"
#include "../include/add.h"
#include "../include/ui.h"
using namespace std;

int main(){
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
    Peop.maxPeople = 15;
    while (true){

    }
}
