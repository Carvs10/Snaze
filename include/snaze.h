#ifndef SNAZE_H
#define SNAZE_H

#include <iostream>
#include "snapshot.h"
#include <list>


namespace Snaze{
    
    class Snake{

        private:
            
            std::pair<int,int> spawn;
            int life //!< store the ammount of life

            int head_x;
            int head_y;

            Directions direct;
                   
        public:


            std::list< std::pair<int,int> > body;
            //=== Consturctors
            Snake( int x = 0, int y = 0, Directions d=UP )
            : life(5)
            {
                spawn.first = head_x = x;
                spawn.second = head_y = y;
                direct = d;
            }

            void set_pos( int x, int y)
            {
                

            }

            //===  Desturctor  
            ~Snake()
            //=== Growing the snake
            void evolve();


    };
}

#endif