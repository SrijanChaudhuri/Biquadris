#ifndef _GRAPHIC_DISPLAY_H_
#define _GRAPHIC_DISPLAY_H_

#include "display.h"
#include "window.h"
#include <string>

class GraphicDisplay: public Display {
	Xwindow *w;
	const int height;
	const int width;
	Grid *g1;
	Grid *g2;
	void printCell(char type, int x, int y);
	void printBoard();
	void printNext(int x, int y, char type);
	public:
	GraphicDisplay(Grid *g1, Grid *g2);
	void printDisplay() override;
};

#endif
