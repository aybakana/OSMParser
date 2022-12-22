#pragma once

#include "util.h"
#include "member.h"
#include "tag.h"

#include <tinyxml2.h>

#include <vector>

namespace xml = tinyxml2;

namespace osmp
{
	class Object;

	class INode : public IMember
	{
	public:
		INode(const INode& other) = delete;
		INode(const INode&& other) = delete;
		virtual ~INode() {}

		friend Node CreateNode(const xml::XMLElement* element, Object* parent);	

		double GetLat() const { return lat; }
		double GetLon() const { return lon; }

	protected:
		INode(const xml::XMLElement* xml, Object* parent);

	public:
		double lat, lon;
	};
}

