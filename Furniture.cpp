//---------------------------------------------------------------------------


#pragma hdrstop

#include "Furniture.h"



Furniture::Furniture(UnicodeString newName):name(newName),
										  width(0),
										  height(0),
										  color(clMedGray){

}


UnicodeString Furniture::Name() const{
	return name;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
