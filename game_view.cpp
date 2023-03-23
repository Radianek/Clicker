//
// Created by adm on 23.03.2023.
//

#include "game_view.h"
#include <iostream>

using namespace std;



void game_view::update_title() {
    system("cls");
    cout << "_______________________________________________________________________________________________________";
    cout << "\n\n\t\t\t\tCONSOL CLICKER\n";
    cout << "_______________________________________________________________________________________________________\n";
}

void game_view::update_points(int get_points) {
    cout << "\n\t\t\t\tPoints: " << get_points<<endl;
}

void game_view::update_level(int points) {
    int level;
    cout << "\n\t\t\t\tLevel: " <<level <<endl;

}
