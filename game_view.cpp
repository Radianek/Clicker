//
// Created by adm on 23.03.2023.
//

#include "game_view.h"
#include <iostream>


using namespace std;



void game_view::update_title() {
    system("cls");
    cout << " ___________________________________________________________________________________";
    cout << "\n|\t\t\t\t\t\t\t\t\t\t    |\n|\t\t\t\tCONSOL CLICKER\t\t\t\t\t    |\n|";
    cout << "___________________________________________________________________________________|\n";
}

void game_view::update_points(int get_points) {
    cout << "\n\t\t\t\tPoints: " << get_points<<endl;
}
void game_view::update_level(int level) {
    cout << "\n\t\t\t\tLevel: " <<level <<endl;
}
void game_view::motivation1() {
    cout<<"\n\t\t\tIt's not over until i win!!!!";
}
void game_view::motivation2() {
    cout<<"\n\t\t\tKeep going, it's near the end!!!!";
}
void game_view::end_game() {
    cout<<"\n\t\t\tCongratulations, you have reached 10 level!!!!";
}

