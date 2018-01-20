//---------------------------------------------------------------------------

#include<iostream>
#ifndef FurnitureH
#define FurnitureH

#include <vcl.h>

class Furniture{
	std::string name;
	public:
		TColor color;
		int width;
		int height;
		Furniture(std::string);
		std::string Name() const;
};

//---------------------------------------------------------------------------
#endif
