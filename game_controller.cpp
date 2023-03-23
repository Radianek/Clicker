//
// Created by adm on 17.03.2023.
//

#include "game_controller.h"
using namespace std;

game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view){
}


void game_controller::launch()
{
    this->view.update_title();
    this->view.update_points(model.get_points());
    this->view.update_level(model.get_points());
    int key;
    do
    {
        key = _getch();
        if (key == 13)
        {
            this->model.add_points( 1);
            this->view.update_title();
            this->view.update_points(model.get_points());
            this->view.update_level(model.get_points());

        }
    }
    while (key != 27);
}
