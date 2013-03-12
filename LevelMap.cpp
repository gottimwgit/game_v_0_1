#include "levelMap.h"
/**
 * @brief pushes current tile into 'levelTiles'
 *        position is determined by curCol+1 and curRow+1
 *        both are incremented if outside of scope looped back to zero
 */
void LevelMap::pushTile(Tile *tile)
{
	if (!isLevelFull) {
		levelTiles[curX][curY] = tile;
	
		if ((curY % 2) == 0) { //even tiles
			printf("drawing even: x=%d y=%d\n", curX, curY);
			tile->setX(curX * TILE_X_SZ);
			tile->setY((curY/2) * (TILE_Y_SZ));
		} else { //odd tiles
			printf("drawing odd: x=%d y=%d\n", curX, curY);
			tile->setX((curX * TILE_X_SZ) + (TILE_X_SZ/2));
			tile->setY((((curY-1)/2) * TILE_Y_SZ) + (TILE_Y_SZ/2));
		}
		/* now handle the overflow indexes */
		if (curX != maxX) {
			curX++;
		} else {
			/* move to next row */
			curX = 0;

			if (curY != maxY) {
				curY++;
			} else {
				printf("level filled\n");
				curY = 0;
				isLevelFull = true;
			}
		}
	} else {
		//TODO: handle tile overflow for LevelMap ie log error 
		printf("level overflown with tiles\n");
	}
}

void LevelMap::drawLevel()
{
	for (uint16_t i=0; i < totalCols; i++) {
		for (uint16_t j=0; j < totalRows; j++) {
			printf("draw x=%d, y=%d\n", i, j);
			levelTiles[i][j]->drawToScreen();
		}
	}
}

LevelMap::LevelMap(uint32_t numRows, uint32_t numCols)
{
	totalCols = numCols;
	totalRows = numRows;
	maxX = numCols - 1;
	maxY = numRows - 1;
	curX = 0;
	curY = 0;
	isLevelFull = false;

	//resize the levelTiles to accomodate required rows
	levelTiles.resize(numCols);
	
	/*	each row entry contains vector of columns entries
			<-------numCols-------->
		   ^	_________________________
		   |	| x | x | x | x | x | x |
		   |	-------------------------
	    numRows	 ||  ||  ||  ||  ||  ||
	 	   |	 ||  ||  ||  ||  ||  ||
		   |	 ||  ||  ||  ||  ||  ||
		   v	 ||  ||  ||  ||  ||  || 
	*/

	for (uint32_t i = 0; i < numCols; i++) {
		levelTiles[i].resize(numRows);
	}

}

LevelMap::~LevelMap()
{
	//TODO: implement destructor
}