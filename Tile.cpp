#include "Tile.h"

void Tile::drawToScreen() 
{
	DrawableObject::drawToScreen();
}

Tile::Tile( string img_location ) : DrawableObject( img_location )
{
}

Tile::~Tile(void)
{
}
