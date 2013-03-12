/* library includes */
#include "common_includes.h"

#include "DisplayHandler.h"
#include "Tile.h"
#include "DrawableObject.h"
#include "LevelMap.h"


	
int main( int argc, char** argv )
{
	int flags = IMG_INIT_JPG | IMG_INIT_PNG;
	int initted=IMG_Init(flags);
	if( (initted & flags) != flags) {
		printf("could not init SDL_Image\n");
		printf("Reason: %s",IMG_GetError());
	}

	DisplayHandler displayHandler;
	if ( !displayHandler.initDisplayEnvironment() ) {
		//handle error
		exit(-1);
	}

	LevelMap lvl01(4,3);
	Tile t00("./bitmaps/test/tile_default_01.png");
	Tile t01("./bitmaps/test/tile_default_02.png");
	Tile t02("./bitmaps/test/tile_default_03.png");

	Tile t03("./bitmaps/test/tile_default_04.png");
	Tile t04("./bitmaps/test/tile_default_03.png");
	Tile t05("./bitmaps/test/tile_default_02.png");

	Tile t06("./bitmaps/test/tile_default_04.png");
	Tile t07("./bitmaps/test/tile_default_03.png");
	Tile t08("./bitmaps/test/tile_default_02.png");

	Tile t09("./bitmaps/test/tile_default_04.png");
	Tile t10("./bitmaps/test/tile_default_03.png");
	Tile t11("./bitmaps/test/tile_default_02.png");

	Tile t12("./bitmaps/test/tile_default_04.png");
	Tile t13("./bitmaps/test/tile_default_03.png");


	lvl01.pushTile(&t00);
	lvl01.pushTile(&t01);
	lvl01.pushTile(&t02);

	lvl01.pushTile(&t03);
	lvl01.pushTile(&t04);
	lvl01.pushTile(&t05);

	lvl01.pushTile(&t06);
	lvl01.pushTile(&t07);
	lvl01.pushTile(&t08);

	lvl01.pushTile(&t09);
	lvl01.pushTile(&t10);
	lvl01.pushTile(&t11);

	lvl01.pushTile(&t12);
	lvl01.pushTile(&t13);




	lvl01.drawLevel();
	SDL_Flip( DisplayHandler::screen );
	SDL_Delay(3000);
	
	return 0;
}


