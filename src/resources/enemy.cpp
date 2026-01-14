#include "enemy.hpp"
#include "../globals.hpp"

using namespace tic_tac_toe;

void tic_tac_toe::Enemy::Make_move()
{
    bool is_succeed{};
    while(!is_succeed)
    {
        std::uniform_int_distribution<int>  row_gen{0,globals::ROWS_AMOUNT};
        std::uniform_int_distribution<int> collumn_gen{0,globals::COLUMNS_AMOUNT};

        int row = row_gen(generator);
        int coll = collumn_gen(generator);

        if(Player::Make_move(row,coll))
        {
            is_succeed = true;
        }
    }
}
