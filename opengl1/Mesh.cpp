/*
 * Mesh.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: yuanhong
 */

#include "Mesh.h"

void Mesh::setTriData(std::vector<Vertex> &vertices,
		std::vector<uint32_t> &indices) {

	std::vector<Vertex> _vertices = {

			{ { 0.0f, -1.0f, 0.0f }, { 0.0f, 0.0f, 1.0 }, { 1.0f, 0.0f, 0.0 }, { 0.0,
			1.0 } }, { { 1.0f, 1.0f, 0.0f }, { 0.0f, 0.0f, 1.0 }, { 0.0f, 1.0f,
			0.0 }, { 0.0, 0.0 } }, { { -1.0f, 1.0f, 0.0f }, { 0.0f, 0.0f, 1.0 },
			{ 0.0f, 0.0f, 1.0 }, { 1.0, 0.0 } },

	};

	std::vector<uint32_t> _indices = { 0, 1, 2, };

	vertices.clear();
	indices.clear();

	vertices = _vertices;
	indices = _indices;

}

