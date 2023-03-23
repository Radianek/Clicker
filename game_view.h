//
// Created by adm on 23.03.2023.
//

#ifndef EXAMPLEMVC_GAME_VIEW_H
#define EXAMPLEMVC_GAME_VIEW_H
#include "game_model.h"

class game_view {

public:
    void update_title();
    void update_points(int get_points);
    void update_level(int points);

private:
    game_model model;

};


#endif //EXAMPLEMVC_GAME_VIEW_H
