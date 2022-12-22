#pragma once

#include "object.h"

#include <vector>
//#include <memory> // no need for this

namespace xml = tinyxml2;

namespace osmp
{
	class Object;
	class IMember;

	typedef struct sMemberNode {
		Node node;
		std::string role;
	} MemberNode;

	typedef struct sMemberWay {
		Way way;
		std::string role;
	} MemberWay;

	typedef std::vector<MemberNode> MemberNodes;
	typedef std::vector<MemberWay> MemberWays;

	class IRelation : public IMember
	{
	public:
		IRelation(const IRelation& other) = delete;
		IRelation(const IRelation&& other) = delete;
		virtual ~IRelation() {}

		friend Relation CreateRelation(const xml::XMLElement* xml, Object* parent);

		[[nodiscard]] std::string GetRelationType() const;

		[[nodiscard]] const MemberNodes& GetNodes() const;
		[[nodiscard]] size_t GetNodesSize() const;
		[[nodiscard]] const MemberNode& GetNode(size_t index) const;

		[[nodiscard]] const MemberWays& GetWays() const;
		[[nodiscard]] size_t GetWaysSize() const;
		[[nodiscard]] const MemberWay& GetWay(size_t index) const;

		[[nodiscard]] bool HasNullMembers() const { return hasNullMembers; }

	protected:
		IRelation(const xml::XMLElement* xml, Object* parent);

	private:
		std::string relationType;
		bool hasNullMembers;

		MemberNodes nodes;
		MemberWays ways;
	};
}