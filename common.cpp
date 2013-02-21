#include "common.h"

SDL_Surface *load_image( string filename )
{ 
	SDL_Surface* loadedImage = NULL;
	SDL_Surface* optimizedImage = NULL; 
	//Load the image using SDL_image 
	loadedImage = IMG_Load( filename.c_str() );

	//If the image loaded 
	if ( loadedImage != NULL ) { 
		//Create an optimized image 
		optimizedImage = SDL_DisplayFormat( loadedImage ); 
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

void apply_surface( int16_t x, int16_t y,
                    SDL_Surface *src, SDL_Surface *dest )
{
	SDL_Rect offset;

	offset.x = x;
	offset.y = y;
	
	SDL_BlitSurface( src, NULL, dest, &offset );
}
