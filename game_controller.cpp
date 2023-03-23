//
// Created by adm on 17.03.2023.
//

#include "game_controller.h"
using namespace std;

game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view){
}


void game_controller::launch()
{
    int key;
    do
    {
        key = _getch();
        if (key == 13)
        {
            this->model.add_points( 1);
            this->view.update(model.get_points());

        }
    }
    while (key != 27);
}
