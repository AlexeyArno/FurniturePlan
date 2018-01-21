//---------------------------------------------------------------------------

#include<iostream>
#ifndef FurnitureH
#define FurnitureH

#include <vcl.h>

class Furniture{
	UnicodeString name;
	public:
		TColor color;
		int width;
		int height;
		Furniture(UnicodeString);
		UnicodeString Name() const;
};

//---------------------------------------------------------------------------
#endif
