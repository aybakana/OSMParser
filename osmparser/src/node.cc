//#include "osmparser/object.hpp"
#include "osmparser/node.h"

#include <tinyxml2.h>

namespace xml = tinyxml2; // already defined

namespace osmp
{
	INode::INode(const xml::XMLElement* node_elem, Object* parent) :
		IMember(node_elem, parent, IMember::Type::NODE)
	{
		// Get Attribute
		lat =		GetSafeAttributeFloat(node_elem, "lat");
		lon =		GetSafeAttributeFloat(node_elem, "lon");
	}


	namespace {
		struct ConcreteNode : public INode {
			ConcreteNode(const xml::XMLElement* node_elem, Object* parent) :
				INode(node_elem, parent)
			{}
		};
	}

	Node CreateNode(const xml::XMLElement* node_elem, Object* parent)
	{
		return std::make_shared<ConcreteNode>(node_elem, parent);
	}


}