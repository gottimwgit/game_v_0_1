#ifndef __TILE_H__
#define __TILE_H__
#pragma once

#include "DrawableObject.h"
#include "common_includes.h"

class Tile : public DrawableObject
{
private:
	uint32_t numItemsStored;
	vector<uint32_t> itemsStored;
	uint32_t tileType;

public:
	void drawToScreen();
	void setX(uint16_t x_new)	{ x = x_new; }
	uint16_t getX()			{ return x; }
	void setY(uint16_t y_new)	{ y = y_new; }
	uint16_t getY()			{ return y; }
	Tile(string img_location);	//calls  : DrawableObject( img_location )
	~Tile(void);
};

#endif /* __TILE_H__*/
