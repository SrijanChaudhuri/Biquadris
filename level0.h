#ifndef _LEVEL0_H_
#define _LEVEL0_H_

#include "level.h"
#include <string>

class Level0: public Level {
	std::string sequence;
	int len;
	int pos;
public:
	void init(std::string sequence);
	virtual Block * generateBlock() override;
	virtual void setSeed(int) override;
	virtual int getLevel() override;
};

#endif