//---------------------------------------------------------------------------


#pragma hdrstop

#include "Furniture.h"



Furniture::Furniture(std::string newName):name(newName),
										  width(0),
										  height(0),
										  color(clMedGray){

}


std::string Furniture::Name() const{
	return name;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
