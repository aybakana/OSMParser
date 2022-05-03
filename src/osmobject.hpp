#pragma once
#include <string>
#include <memory>
#include <map>
#include <vector>

#include "util.hpp"

namespace osmp
{
	class Object
	{
	public:
		explicit Object(const std::string& file);
		~Object();

		Nodes GetNodes() const;
		size_t GetNodesSize() const;
		Node GetNode(uint64_t id) const;

		Ways GetWays() const;
		size_t GetWaysSize() const;
		Way GetWay(uint64_t id) const;

		Relations GetRelations() const;
		size_t GetRelationsSize() const;
		Relation GetRelation(uint64_t id) const;

	public:
		const std::string version;
		const std::string generator;

		Bounds bounds;
		
	private:
		std::map<uint64_t, Node> nodes;
		std::map<uint64_t, Way> ways;
		std::map<uint64_t, Relation> relations;
	};
}