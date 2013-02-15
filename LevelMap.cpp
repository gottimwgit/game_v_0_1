#include "levelMap.h"

LevelMap::LevelMap( uint32_t numRows, uint32_t numCols )
{
	this->totalRows = numRows;
	this->totalCols = numCols;
	this->curCol = 0;
	this->curRow = 0;

	//resize the levelTiles to accomodate required rows
	levelTiles.resize(numRows);
	
	/*	each row entry contains vector of columns entries
			___
			|x|=====
			|x|=====
			|x|=====
			|x|=====			
			---
	*/

	for (uint32_t i = 0; i < numRows; i++) {
		vector<Tile *> tempRow(numCols);
		levelTiles.push_back( tempRow ); 
	}

}

LevelMap::~LevelMap( void )
{
	//TODO: implement destructor
}