#ifndef __DRAWABLE_OBJECT_H__
#define __DRAWABLE_OBJECT_H__

#include "common.h"

class DrawableObject {
private:
	uint32_t x;  // x coordinate from left
	uint32_t y;  // y coordiante from top!
	uint32_t z;
	uint32_t objectID;
	SDL_Surface *bitmap;

public:
	bool drawObject();

	DrawableObject( string img_location );
	~DrawableObject(void);
};

#endif /* __DRAWABLE_OBJECT_H__ */

