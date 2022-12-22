#pragma once

#include "util.h"
#include "tag.h"

#include <string>
#include <vector>
#include <map>

namespace osmp
{
	class Object;

	class IMember 
	{
	public:
		enum class Type {
			NODE, WAY, RELATION
		};

		IMember(const IMember& other) = delete;
		virtual ~IMember() {}

		IMember::Type GetType() const;

		const TagList& GetTags() const;
		size_t GetTagsSize() const;
		const Tag& GetTag(size_t index) const;
		std::string GetTag(const std::string& key) const;

	protected:
		IMember(const tinyxml2::XMLElement* element, Object* parent, IMember::Type type);

		IMember::Type type;
		Object* parent;

		TagList tags;
		
	public:
		uint64_t id;
		std::string user;
		unsigned int uid;
		bool visible;
		std::string version;
		unsigned int changeset;
		std::string timestamp;
	};
}




