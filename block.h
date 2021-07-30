#ifndef _BLOCK_H_
#define _BLOCK_H_

#include <vector>
#include "cell.h"

class Block {

        protected:
        Cell *lowerleft; // contains the lower-left corner cell
        std::vector <Cell *> block; // contains all cells in current block

        public:
        virtual void init(std::vector<std::vector<Cell *>> grid) = 0; 
        virtual void moveLeft() = 0;
        virtual void moveRight() = 0;
        virtual void moveDown() = 0;
        virtual void drop() = 0;
        virtual void rotateCW() = 0;
        virtual void rotateCCW() = 0;
        virtual bool lost() = 0;

};

class InvalidMoveException {}; // raised if move is invalid

#endif