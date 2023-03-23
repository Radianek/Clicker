//
// Created by adm on 17.03.2023.
//

#ifndef UNTITLED_GAME_MODEL_H
#define UNTITLED_GAME_MODEL_H


class game_model {

public:
    int get_points();
    int get_level();
    void add_points(int p);
    void update_level();

private:
    int points = 0;
    int points_per_click=1;
    int current_level=0;
    int points_needed=10;
};


#endif //UNTITLED_GAME_MODEL_H

