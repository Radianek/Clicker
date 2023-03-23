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
    this->view.update_level(model.get_level());
    int key;
    do
    {
        key = _getch();
        if (key == 13)
        {
            this->model.add_points( model.get_p_click());
            this->view.update_title();
            this->view.update_points(model.get_points());
            this->model.update_level();
            this->view.update_level(model.get_level());
            if(model.get_points()>=5300){}
            else if(model.get_points()>=5120)
                this->view.end_game();
            else if(model.get_points()>=4000)
                this->view.motivation2();
            else if(model.get_points()>=3000)
                this->view.motivation1();
        }
    }
    while (key != 27);
}
