#ifndef __TILE_H__
#define __TILE_H__
#pragma once

#include "common.h"
#include "DrawableObject.h"

class Tile : public DrawableObject
{
private:
	uint32_t numItemsStored;
	vector<uint32_t> itemsStored;
	uint32_t tileType;

public:
	Tile( string img_location);	//calls  : DrawableObject( img_location )
	~Tile(void);
};

#endif /* __TILE_H__*/
