#ifndef _CELL_H_
#define _CELL_H_

class Cell {

        char type;
        int age;
        int row;
        int col;

        public:
        Cell(int row, int col);
        void setType(char type); 
        char getType();
        int getAge();
        int getRow();
        int getCol();
        bool isFull();
        void updateAge(); // increments age of cell
        void swapCell(Cell *other); // swaps the contents of other with this
        void clearCell(); // resets the cell

};

#endif
