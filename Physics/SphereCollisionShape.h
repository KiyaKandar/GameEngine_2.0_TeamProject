/******************************************************************************
Class: SphereCollisionShape
Implements: CollisionShape
Author: 
	Pieran Marris      <p.marris@newcastle.ac.uk> and YOU!
Description:

	Extends CollisionShape to represent a sphere.

	This is an example of a implicit collision shape, where all of the output data can be computed algorithmetrically. For instance,
	getting the closest point on a sphere only needs a radius to clamp the length of the vector. Implicit collision shapes are generally
	faster and more effecient, and allow the representation of perfect shapes that would require too many vertices/faces to represent otherwise
	e.g. curved surfaces.

	A sphere object is one of the easiest 3D shapes to model, as for collision purposes it can only ever have one axis of itersection,
	it also can only ever have one contact point. This makes alot of the returns quite trival compared to the cuboid that requires alot of
	setting up and adjanency information.

*//////////////////////////////////////////////////////////////////////////////
#pragma once

#include "CollisionShape.h"

class SphereCollisionShape : public CollisionShape
{
public:
	SphereCollisionShape();
	SphereCollisionShape(float radius);
	virtual ~SphereCollisionShape();

	void setScale(NCLVector3 scale, float invMass) override
	{
		m_Radius = scale.x;
		BuildInverseInertia(invMass);
	}

	// Get/Set Sphere Radius
	void	SetRadius(float radius) { m_Radius = radius; }
	float	GetRadius() const { return m_Radius; }

	// Debug Collision Shape
	virtual void DebugDraw(std::vector<DebugLineMessage>& lineMessages, std::vector<DebugSphereMessage>& sphereMessages) const override;

	// Build Inertia Matrix for rotational mass
	virtual NCLMatrix3 BuildInverseInertia(float invMass) const override;


	// Generic Collision Detection Routines
	//  - Used in CollisionDetectionSAT to identify if two shapes overlap
	virtual void GetCollisionAxes(
		PhysicsNode* otherObject,
		std::vector<NCLVector3>& out_axes) const override;

	virtual NCLVector3 GetClosestPoint(const NCLVector3& point) const override;

	virtual void GetMinMaxVertexOnAxis(
		const NCLVector3& axis,
		NCLVector3& out_min,
		NCLVector3& out_max) const override;
	
	virtual void GetIncidentReferencePolygon(
		const NCLVector3& axis,
		std::list<NCLVector3>& out_face,
		NCLVector3& out_normal,
		std::vector<Plane>& out_adjacent_planes) const override;

protected:
	float	m_Radius;
};

