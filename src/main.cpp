#include <cstddef>
#include <ctime>
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
    ans = login();
    switch (stoi(ans)){
        case 1:
            cout << "Game starts";
            while(true){
                //game code
            }
            break;
        case 2:
            settings();
            break;
        default:
            cout << "Quit!";
            break;
    }
}
