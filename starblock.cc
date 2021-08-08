#include "starblock.h"

using namespace std;

StarBlock::StarBlock() : Block{4} {
	setIdentity();
}

char StarBlock::getType(){
	return '*';
}

void StarBlock::switchBlocks() {
	int row = lowerleft->getRow();
	int col = lowerleft->getCol();
	if (row + 1 > 10 || grid[row + 1][col]->getType() != '\0') {
		throw InvalidMoveException {};
	}
	Cell *other = grid[row + 1][col];
	other->setType('*');
	lowerleft->setType('\0');
	block.clear();
	lowerleft = other;
	block.push_back(lowerleft);
}

void StarBlock::init(vector<vector<Cell *>> &g) {
	grid = g;
	lost();
	lowerleft = grid[3][5];
	block.push_back(lowerleft);
}

void StarBlock::lost() {
	if (grid[3][5]->isFull()) {
		throw LostException();
	}
}

void StarBlock::moveLeft() {
}

void StarBlock::moveRight() {
}

void StarBlock::moveHeavyDown() {
}

void StarBlock::moveDown() {
}

void StarBlock::drop() {
	try {
		switchBlocks();
	} catch (InvalidMoveException &e) {
	}
}

