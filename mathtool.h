
#define  PI 3.1415926536f
#define EARTH_RADIUS 6371.004

namespace MathTool
{
	

	//get the distance between tow points of the earth 
	double getDistance(double lat1, double lon1, double lat2, double lon2)
	{
		return 2 * EARTH_RADIUS * asin(sqrt(pow(sin((lat1 / 180 * PI - lat2 / 180 * PI) / 2), 2) + \
			cos(lat1 / 180 * PI)*cos(lat2 / 180 * PI)*
			pow(sin((lon1 / 180 * PI - lon2 / 180 * PI) / 2), 2)));
	}

}


