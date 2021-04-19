#pragma once
#include <vector>

#include <util.hpp>
#include <osmimember.hpp>
#include <osmtag.hpp>

namespace osmp
{
	class Object;

	class INode : public IMember
	{
	public:
		INode(const INode& other) = delete;
		INode(const INode&& other) = delete;
		virtual ~INode() {}

		friend Node CreateNode(const tinyxml2::XMLElement* element, Object* parent);

		double GetLat() const { return lat; }
		double GetLon() const { return lon; }

	protected:
		INode(const tinyxml2::XMLElement* xml, Object* parent);

	public:
		double lat, lon;
	};
}