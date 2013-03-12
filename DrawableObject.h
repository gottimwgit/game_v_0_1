#ifndef __DRAWABLE_OBJECT_H__
#define __DRAWABLE_OBJECT_H__

#include "common_includes.h"
#include "DisplayHandler.h"

class DrawableObject : public DisplayHandler 
{
protected:
	uint16_t x;  // x coordinate from left
	uint16_t y;  // y coordiante from top!
	uint16_t z;  // z index
	uint16_t objectID;
	SDL_Surface *bitmap;

public:
	virtual void drawToScreen();

	DrawableObject(string img_location);
	~DrawableObject(void);
};

#endif /* __DRAWABLE_OBJECT_H__ */
