/* library includes */
#include "common.h"
#include "Tile.h"
#include "DrawableObject.h"
#include "LevelMap.h"


/* prototype */
bool init();

/*global vars */
SDL_Surface *screen = NULL;

int main( int argc, char** argv )
{
	init();

	LevelMap lvl01(2,2);
	Tile t00("./bitmaps/test/tile_default_01.png");
	Tile t01("./bitmaps/test/tile_default_02.png");
	Tile t02("./bitmaps/test/tile_default_03.png");
	Tile t03("./bitmaps/test/tile_default_04.png");

	lvl01.pushTile(&t00);
	lvl01.pushTile(&t01);
	lvl01.pushTile(&t02);
	lvl01.pushTile(&t03);

	return 0;
}

bool init() {
	//Initialize all SDL subsystems 
	if ( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
		return false; 
	//Set up the screen 
	screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );
	//If there was an error in setting up the screen 
	if( screen == NULL ) 
		return false;
	//Set the window caption 
	SDL_WM_SetCaption( "Event test", NULL );

	SDL_EnableKeyRepeat(25, 20);

	//If everything initialized fine 
	return true; 
}
