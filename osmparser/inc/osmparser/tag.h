#pragma once

#include <string>
#include <vector>

namespace osmp
{

	enum class TagKey {
		NONE,
		AERIALWAY, AEROWAY, AMENITY, BARRIER, BOUNDARY,
		BUILDING, CRAFT, EMERGENCY, GEOLOGICAL, HEALTHCARE,
		HIGHWAY, HISTORIC, LANDUSE, LEISURE, MANMADE, MILITARY,
		NATURAL, OFFICE, PLACE, POWER, PUBLIC_TRANSPORT, 
		RAILWAY, ROUTE, SHOP, SPORT, TELECOM, TOURISM, WATER, WATERWAY
	};

	typedef struct sTag
	{
		std::string k;	// TODO: Should/could be an enum
		std::string v;
	} Tag;

    typedef std::vector<Tag> TagList;  // could be a map

}