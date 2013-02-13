#ifndef __COMMON_H__
#define __COMMON_H__
#pragma once
using namespace std;

/* std includes */
using namespace std;

/* library includes */
#include "SDL.h"
#include "SDL_image.h"

/* sys includes */
#include <string>
#include <cstdint>
#include <vector>

/* global constants */
const uint32_t SCREEN_WIDTH = 640;
const uint32_t SCREEN_HEIGHT = 480;
const uint32_t SCREEN_BPP = 32;

/**
 * @brief loads optimised bitmap 
 * @return pointer to SDL_Surface
 */
SDL_Surface *load_image( string filename );
void apply_surface( int x, int y, SDL_Surface *src, SDL_Surface *dest );

#endif /* end of __COMMON_H__ */
