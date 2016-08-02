#pragma once

#include <string>

class GeometryPtr;

class GeometryGroup {
public:
	GeometryPtr* getGeometry(const std::string&);
};