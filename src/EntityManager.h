#pragma once

#include "./Entity.h"
#include "./Component.h"

class EntityManager {
private:
	std::vector<Entity*> entities;
public:
	void Update(fload DeltaTime);
	void Render();
	bool HasNoEntities();
	Entity& AddEntity(std::string entityName);
	std::vector<Entity*> GetEntities() const;
	unsigned int GetEntityCount();
};
