#ifndef __LEVEL_MAP__
#define __LEVEL_MAP__
#pragma once

#include "Tile.h"

class LevelMap
{
private:
	vector< vector<Tile *> > levelTiles;// holds all tiles for current level
	uint32_t totalCols;			// count cols starts with 1
	uint32_t totalRows;			// count rows starts with 1
	uint32_t maxX;				// count starts with 0
	uint32_t maxY;				// count starts with 0
	uint32_t curX;				// current column (X) position
	/* note that in SDL Y is inverted */
	uint32_t curY;				// current row  (Y) position
	bool isLevelFull;
	
public:
	void pushTile(Tile *tile);
	void drawLevel();
	
	LevelMap( uint32_t numRows, uint32_t numCols );
	~LevelMap( void );
};

#endif /* __LEVEL_MAP_H__ */
