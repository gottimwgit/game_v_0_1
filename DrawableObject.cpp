#include "DrawableObject.h"
#include "DisplayHandler.h"

DrawableObject::DrawableObject(string img_location) 
{
	this->bitmap = DisplayHandler::loadImage(img_location);
}

DrawableObject::~DrawableObject(void)
{

}

/**
 * @brief blits instance to screen
 *
 */
void DrawableObject::drawToScreen()
{
	 DisplayHandler::applySurface(x, y, bitmap, screen);
}
