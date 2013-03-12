#ifndef __DISPLAY_HANDLER_H__
#define __DISPLAY_HANDLER_H__
#pragma once

#include "common_includes.h"

class DisplayHandler {
public:
	/*
		ALL VARS RELATED TO DISPLAY MUST BE STATIC!
	 */
	/* global constants */
	static uint32_t screen_width;
	static uint32_t screen_height;
	static uint32_t screen_bpp;
	static SDL_Surface *screen;

public:
	DisplayHandler();
	~DisplayHandler();
	
	bool initDisplayEnvironment();
	SDL_Surface *loadImage( string filename );
	void applySurface( int16_t x, int16_t y, SDL_Surface *src, SDL_Surface *dest );
	SDL_Surface *getPtrToScreen() {return screen;}
};
#endif /* end of __DISPLAY_HANDLER_H__ */
