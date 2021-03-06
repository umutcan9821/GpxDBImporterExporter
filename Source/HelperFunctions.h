/*==========================================================
 Copyright (c) Peter Vasil, 2011
 ==========================================================*/

#ifndef _HELPERFUNCTIONS_H_
#define _HELPERFUNCTIONS_H_

#include "Data.h"

class Helper
{
public:
    static int findLocation(const Array<GpsLocation>& locations,
    		const double lon, const double lat, const char boundingType='U');

    static bool isInCircle(const double centreX,
                    const double centreY,
                    const double radius,
                    const double lon,
                    const double lat);

    static bool isInCircle2(const double centreX,
                        const double centreY,
                        const double radius,
                        const double lon,
                        const double lat,
                        const char unit='K');

    static bool isInBoundingBox(const double lon, const double lat,
    		const double lonBottomLeft, const double latBottomLeft,
    		const double lonTopRight, const double latTopRight);

    static bool isInPolygon(const double lon, const double lat,
    		const Array<Point<double> >& points);

    static void getPointsFromPolygonString(const String& polyStr,
    		Array<Point<double> >& points);

    static String getPolygonStringFromPoints(const Array<Point<double> >& points);

    static GpsMinMax getMinMaxForGpsLocations(const Array<GpsLocation>& locs);

private:
    Helper(){}
    ~Helper(){}
};

#endif // _HELPERFUNCTIONS_H_
