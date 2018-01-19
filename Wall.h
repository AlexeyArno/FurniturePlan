//---------------------------------------------------------------------------

#ifndef WallH
#define WallH
#include "Point.h"

class Wall{
	public:
		Point2D start;
		Point2D end;
        Wall(Point2D,Point2D);

};
//---------------------------------------------------------------------------
#endif
