#ifndef __LEVEL_MAP__
#define __LEVEL_MAP__
#pragma once

#include "Tile.h"

class LevelMap
{
private:
	vector< vector<Tile *> > levelTiles;	//holds all tiles for current level
	uint32_t curRow;					//current row position
	uint32_t totalRows;		
	uint32_t curCol;					//current column position
	uint32_t totalCols;
public:
	LevelMap( uint32_t numRows, uint32_t numCols );
	~LevelMap( void );
};

#endif /* __LEVEL_MAP_H__ */
