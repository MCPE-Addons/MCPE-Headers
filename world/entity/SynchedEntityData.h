#pragma once

#include <vector>
#include <memory>

class DataItem;

class SynchedEntityData {
public:
	std::vector<std::unique_ptr<DataItem>> packAll() const;
};