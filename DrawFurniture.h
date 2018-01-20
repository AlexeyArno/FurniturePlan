//---------------------------------------------------------------------------


#ifndef DrawFurnitureH
#define DrawFurnitureH

#include "Furniture.h"
#include "Point.h"
#include <vcl.h>

class DrawFurniture{
	public:
		UnicodeString custom_name;
		int id;
		Point2D position;
		int orientation;
		Furniture origin;
		DrawFurniture(Furniture, int, UnicodeString);
		void Draw(TCanvas*, int, bool);

};
//---------------------------------------------------------------------------
#endif
