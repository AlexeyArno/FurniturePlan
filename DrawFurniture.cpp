//---------------------------------------------------------------------------


#pragma hdrstop

#include "DrawFurniture.h"
DrawFurniture::DrawFurniture(Furniture org, int _id, std::string name):orientation(0),
														origin(org),
														position(*new Point2D(2,2)),
														id(_id),
														custom_name(name){
//	position = *new Point2D(0,0);
};

void DrawFurniture::Draw(TCanvas * can,int scale,bool current){
	TColor defBrushColor = can->Brush->Color;
	can->Brush->Color = origin->color;

	TColor defPenColor = can->Pen->Color;
	if(current){
		can->Pen->Color = clRed;
	}
	can->Rectangle(5+scale*position.x,
				   5+scale*position.y,
				   5+scale*(position.x+origin->width),
				   5+scale*(position.y+origin->height));

	can->Brush->Color = defBrushColor;
	if(current){
		can->Pen->Color = defPenColor;
	}

}

//---------------------------------------------------------------------------

#pragma package(smart_init)
