#include <ctime>
#include <cstdlib>

int getrandom(){
    srand(time(0));
    return rand() % 100+1;
}