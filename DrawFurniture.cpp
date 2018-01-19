//---------------------------------------------------------------------------


#pragma hdrstop

#include "DrawFurniture.h"
DrawFurniture::DrawFurniture(Furniture* org, int _id, std::string name):orientation(0),
														origin(org),
														position(*new Point2D(0,0)),
														id(_id),
														custom_name(name){
	position = *new Point2D(0,0);
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
