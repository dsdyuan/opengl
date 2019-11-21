/*
 * Mesh.h
 *
 *  Created on: Nov 21, 2019
 *      Author: yuanhong
 */

#ifndef MESH_H_
#define MESH_H_

#include <vector>
#include "glm/glm.hpp"

enum MeshType{

	kTrigangle = 0,
	kQuad = 1,
	kCube =2,
	kSphere = 3
};

struct Vertex {
	glm::vec3 pos;
	glm::vec3 normal;
	glm::vec3 color;
	glm::vec2 texCoords;
};


class Mesh{
public:
	static void setTriData(std::vector<Vertex>& vertices,std::vector<uint32_t>& indices);
	static void setQuadData(std::vector<Vertex>& vertices,std::vector<uint32_t>& indices);
	static void setCubeData(std::vector<Vertex>& vertices,std::vector<uint32_t>& indices);
	static void setShpereData(std::vector<Vertex>& vertices,std::vector<uint32_t>& indices);
};


#endif /* MESH_H_ */
