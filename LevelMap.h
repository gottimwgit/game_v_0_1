#ifndef __LEVEL_MAP__
#define __LEVEL_MAP__
#pragma once

#include "Tile.h"

class LevelMap
{
private:
	vector< vector<Tile *> > levelTiles;	//holds all tiles for current level
	uint32_t totalCols;			// count cols starts with 1
	uint32_t totalRows;			// count rows starting with 1
	uint32_t maxX;
	uint32_t maxY;
	uint32_t curX;				//current column (X) position
	/* note that in SDL Y is inverted */
	uint32_t curY;				//current row  (Y) position
	

public:
	void pushTile(Tile *tile);
	
	LevelMap( uint32_t numRows, uint32_t numCols );
	~LevelMap( void );
};

#endif /* __LEVEL_MAP_H__ */
