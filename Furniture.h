//---------------------------------------------------------------------------

#include<iostream>
#ifndef FurnitureH
#define FurnitureH
class Furniture{
	std::string name;
	public:
		int width;
		int height;
		Furniture(std::string);
		std::string Name() const;
};

//---------------------------------------------------------------------------
#endif
