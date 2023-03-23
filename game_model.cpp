//
// Created by adm on 17.03.2023.
//

#include "game_model.h"
#include <iostream>
#include <cmath>

int game_model::get_points() {
    return points;
}
int game_model::get_level() {
    return current_level;
}
int game_model::get_p_click() {
    return points_per_click;
}

void game_model::add_points(int p) {
    this->points += p;
}

void game_model::update_level (){
    int points_per_click;
    this->points_needed = 10 * pow(2, current_level);
    if(this->points >= this->points_needed){
        this->current_level++;
        this->points_per_click+=2;
    }
}
