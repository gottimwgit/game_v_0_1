/* library includes */
#include "common.h"
#include "Tile.h"
#include "DrawableObject.h"


/* prototype */
bool init();

/*global vars */
SDL_Surface *screen = NULL;

int main( int argc, char** argv )
{
	printf("\nHIHI\n\n\n");

	init();

	//LevelMap lvl01(2,2);

	//Tile tile01("bitmaps\test\tile_default_01.png");

//	if ( NULL == load_image( "./bitmaps/bitmap2.bmp"))
//	if ( NULL == load_image( "./bitmaps/test2.bmp"))
	if ( NULL == load_image( "./bitmaps/test2.png"))
		exit(-0xff);	

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
