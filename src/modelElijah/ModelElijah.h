#pragma once
#include "../modelBase/ModelBase.h"

#define WALL 1
#define BLUE 2
#define RED 3
#define NONE 0

#define ROWS 7
#define COLUMNS 9
#define PLANES 7

class ModelElijah : public ModelBase {

	struct Transform
	{
		glm::vec3 position = glm::vec3(1.0f);
		glm::vec3 rotation = glm::vec3(1.0f);
		glm::vec3 scale	   = glm::vec3(1.0f);
		glm::mat4 matrix   = glm::mat4(1.0f);
	};

public:
	Transform transform;
	ModelElijah();
	void initialize();

	void generateRandomModel();

	void generateOriginalObject();

private:
	int modelData[ROWS][COLUMNS][PLANES];
	glm::mat4 positionMat;
};