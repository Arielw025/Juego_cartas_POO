
//  SIMULADOR DE JUEGO DE CARTAS
//  Barbara Perez / Ariel Martinez

#include "Menu.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(nullptr));
    Menu menu;
    menu.mostrar();
    return 0;
}
