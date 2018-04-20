//---------------------------------------------------------------------------


#pragma hdrstop

#include "Draw.h"


//---------------------------------------------------------------------------
void drawNet(int height, int width, int scale, TCanvas* can ){
	TColor OColor = can->Pen->Color;
	can->Pen->Color = (TColor)RGB(224,224,224);
	for(int j=5;j<height;j+=scale){
		for(int i=5;i<width;i+=scale){
			can->Rectangle(i,j,i+scale,j+scale);
		}
	}
	can->Pen->Color = OColor;
}
#pragma package(smart_init)
