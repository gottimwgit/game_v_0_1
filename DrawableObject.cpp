#include "drawableObject.h"
#include "common.h"

DrawableObject::DrawableObject( string img_location ) 
{
	this->bitmap = load_image(img_location);
}

DrawableObject::~DrawableObject(void)
{

}

bool DrawableObject::drawObject()
{
	return false;
}



