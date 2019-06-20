#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>
#include <vector>
#include <fstream>

#include "snaze.h"


namespace Snaze{
    /// Represents a level  of the game.
    class Level{
        private:

            std::vector<std::pair<int,int>> maze_dimen; //!< Maze dimensions of each load.
            std::vecto<char**> mazes_vector; // Vector whixh maze are stored.
            size_t level_load; //!< Number of mazes.
            size_t current_level; //!< Current level.
            size_t apples; //!< Stores ammount of apples not eaten.
            std::pair<int,int> apple_loc; //!< Stores the apple location.

            std::vector<std::pair<int,int>> snake_spawn;


        public:

            /// Constructor
            Level()
            : apples(10), level_load(0), current_level(0){

            }

            /// Destructor
            ~Level()
            {
                for(int i =0; i < level_load; i++){
                    for(int k = 0; k < maze_dimen; k++)
                        delete[] mazes_vector[i][j];
                    delete[] mazes_vector[i];
                }
            }

            void read_file();

            void update_apple();


    }
}