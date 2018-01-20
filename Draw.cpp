//---------------------------------------------------------------------------


#pragma hdrstop

#include "Draw.h"


//---------------------------------------------------------------------------
void drawNet(int height, int width, int scale, TCanvas* can ){
	for(int j=5;j<height;j+=scale){
		for(int i=5;i<width;i+=scale){
			can->Rectangle(i,j,i+scale,j+scale);
		}
	}
}
#pragma package(smart_init)
