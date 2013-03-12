#include "DisplayHandler.h"

uint32_t     DisplayHandler::screen_width  = 300;
uint32_t     DisplayHandler::screen_height = 300;
uint32_t     DisplayHandler::screen_bpp = 32;
SDL_Surface *DisplayHandler::screen = NULL;


DisplayHandler::DisplayHandler()
{
}

DisplayHandler::~DisplayHandler()
{
}

bool DisplayHandler::initDisplayEnvironment() {
	if (screen == NULL ) {
		//Initialize all SDL subsystems 
		if (SDL_Init( SDL_INIT_EVERYTHING ) == -1)
			return false; 
		//Set up the screen 
		screen = SDL_SetVideoMode(this->screen_width,
		                          this->screen_height,
		                          this->screen_bpp, 
		                          SDL_SWSURFACE);
		//If there was an error in setting up the screen 
		if (screen == NULL) 
			return false;
		//Set the window caption 
		SDL_WM_SetCaption("Event test", NULL);

		SDL_EnableKeyRepeat(25, 20); 

		return true;
	}
	//else alreafy initialised
	return true;
}

/**
 * @brief loads optimised bitmap 
 * @return pointer to SDL_Surface
 */
SDL_Surface *DisplayHandler::loadImage( string filename )
{ 
	SDL_Surface *loadedImage = NULL;
	SDL_Surface *optimizedImage = NULL; 
	//Load the image using SDL_image 
	loadedImage = IMG_Load( filename.c_str() );

	//If the image loaded 
	if ( loadedImage != NULL ) { 
		//Create an optimized image 
		optimizedImage = SDL_DisplayFormatAlpha( loadedImage ); 
		//Free the old image 
		SDL_FreeSurface( loadedImage );
	} else {
		printf("\n\nCouldn't load %s:%s\n\n",
		       filename.c_str(),
		       IMG_GetError());
		exit(-13);
	}

	return optimizedImage;
}

void DisplayHandler::applySurface(int16_t x,
                                  int16_t y,
                                  SDL_Surface *src,
                                  SDL_Surface *dest)
{
	SDL_Rect offset;

	offset.x = x;
	offset.y = y;
	SDL_BlitSurface( src, NULL, dest, &offset );
}
