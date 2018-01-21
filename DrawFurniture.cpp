//---------------------------------------------------------------------------


#pragma hdrstop

#include "DrawFurniture.h"
DrawFurniture::DrawFurniture(Furniture org, int _id, UnicodeString name):orientation(0),
														origin(org),
														position(*new Point2D(10,10)),
														id(_id),
														custom_name(name){
};

void DrawFurniture::Draw(TCanvas * can,int scale, bool current){
	TColor defBrushColor = can->Brush->Color;
	can->Brush->Color = origin.color;

	TColor defPenColor = can->Pen->Color;
	if(current){
		can->Pen->Color = clRed;
	}
	switch(orientation){
		case 0:
		  can->Rectangle(5+scale*position.x,
						   5+scale*position.y,
						   5+scale*(position.x+origin.width),
						   5+scale*(position.y+origin.height));
		  break;
		case 1:
		  if(position.y-1<1) break;
		  can->Rectangle(  5+scale*(position.x+1),
						   5+scale*(position.y-1),
						   5+scale*(position.x+origin.height+1),
						   5+scale*(position.y+origin.width-1));
						   break;
		case 2:
			if(position.y-1<1) break;
			can->Rectangle(5+scale*position.x,
						   5+scale*(position.y-origin.height),
						   5+scale*(position.x+origin.width),
						   5+scale*position.y);
						   break;
		case 3:
			if(position.x-1<1) break;
			can->Rectangle(5+scale*(position.x-origin.height+1),
						   5+scale*(position.y+origin.width-1),
						   5+scale*(position.x+1),
						   5+scale*(position.y-1));
						   break;
	}


	can->Brush->Color = defBrushColor;
	if(current){
		can->Pen->Color = defPenColor;
	}

}

bool DrawFurniture::setOrientation(int _oritentation, int maxX, int maxY){
	switch(_oritentation){
		case 0:
		  if(position.x+origin.width>maxX
				||position.y+origin.height>maxY) return false;

		  break;
		case 1:
		  if(position.x+origin.height+1>maxX
				|| position.y-1<2
				|| position.x+1 >maxX
				|| position.y+origin.width-1>maxY) return false;
				break;
		case 2:
			if(position.y-origin.height<2
				|| position.x+origin.width>maxX) return false;
			break;
		case 3:
			if(position.x-origin.height+1<1
				|| position.x+1>maxX
				|| position.y -1<2
				|| position.y+origin.width-1>maxY) return false;
			break;
	}
	orientation = _oritentation;
	return true;
}

int* DrawFurniture::getExtremePoints(){
	int result[4];

	switch(orientation){
		case 0:
			result[0] = position.x;
			result[1] = position.y;
			result[2] = position.x+origin.width;
			result[3] = position.y+origin.height;

			break;
		case 1:
			result[0] = position.x+1;
			result[1] = position.y-1;
			result[2] = position.x+origin.height+1;
			result[3] = position.y+origin.width-1;

			break;
		case 2:
			result[0] = position.x;
			result[1] = position.y-origin.height;
			result[2] = position.x+origin.width;
			result[3] = position.y;

			break;
		case 3:
			result[0] = position.x-origin.height+1;
			result[1] = position.y+origin.width-1;
			result[2] = position.x+1;
			result[3] = position.y-1;

			break;
	}
	ShowMessage(IntToStr(result[0])+" "+IntToStr(result[1])+" "+IntToStr(result[2])+" "+IntToStr(result[3]));

	return result;

};

//---------------------------------------------------------------------------

#pragma package(smart_init)
