#include "levelMap.h"
/**
 * @brief pushes current tile into 'levelTiles'
 *        position is determined by curCol+1 and curRow+1
 *        both are incremented if outside of scope looped back to zero
 */
void LevelMap::pushTile(Tile *tile)
{
	levelTiles[curX][curY] = tile;

	/* now handle the overflow indexes */
	if (curX != maxX) {
		curX++;
	} else {
		/* move to next row */
		curX = 0;

		if (curY != maxY) {
			curY++;
		} else {
			curY = 0;
		}
	}
}

LevelMap::LevelMap( uint32_t numRows, uint32_t numCols )
{
	totalCols = numCols;
	totalRows = numRows;
	maxX = numCols - 1;
	maxY = numRows - 1;
	curX = 0;
	curY = 0;

	//resize the levelTiles to accomodate required rows
	levelTiles.resize(numRows);
	
	/*	each row entry contains vector of columns entries
			_________________________
			| x | x | x | x | x | x |
			-------------------------
	 		 ||  ||  ||  ||  ||  ||
	 		 ||  ||  ||  ||  ||  ||
			 ||  ||  ||  ||  ||  ||
			 ||  ||  ||  ||  ||  || 
	*/

	for (uint32_t i = 0; i < numCols; i++) {
		levelTiles[i].resize(numRows);
	}

}

LevelMap::~LevelMap( void )
{
	//TODO: implement destructor
}