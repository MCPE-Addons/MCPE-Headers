#pragma once

class StringHash {
public:
	static const unsigned int FNV_PRIME = 16777619u;
	static const unsigned int OFFSET_BASIS = 2166136261u;

	unsigned int hash_value;

	static unsigned int fnvHash(const char* str) {
		const size_t length = strlen(str);
		unsigned int hash = OFFSET_BASIS;
		for (size_t i = 0; i < length; ++i) {
			hash ^= *str++;
			hash *= FNV_PRIME;
		}
		return hash;
	}

	template <typename T>
	StringHash(const T &str) : hash_value(fnvHash(str)) {}
	operator unsigned int() const { return this->hash_value; }
};