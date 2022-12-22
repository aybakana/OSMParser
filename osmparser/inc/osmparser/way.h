#pragma once

#include "util.h"
#include "tag.h"
#include "member.h"
#include "object.h"

#include <vector>

namespace xml = tinyxml2;

namespace osmp
{
	class Object;

	class IWay : public IMember
	{
	public:
		IWay(const IWay& other) = delete;
		IWay(const IWay&& other) = delete;
		virtual ~IWay() {}

		friend Way CreateWay(const xml::XMLElement* way_elem, Object* parent);

		const Nodes& GetNodes() const;
		size_t GetNodesSize() const;
		Node GetNode(size_t index) const;

	protected:
		IWay(const xml::XMLElement* way_elem, Object* parent);

	public:
		bool area, closed;	// Closed := Startpoint = endpoint, Area := Closed AND certain conditions are not met

	private:
		Nodes nodes;
	};
}