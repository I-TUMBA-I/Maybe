#include <cstddef>
#include "../include/train.h"
#include "../include/add.h"
using namespace std;

int main(){
    srand(time(NULL));
    train t;
    vector<people> tr;
    full(tr, 11);
    t.peoples = tr;
    vector<obj> ob;
    t.objects = ob;
    Mediki Med;
    CarryWag inv;
    PeopleWag Peop;
}
