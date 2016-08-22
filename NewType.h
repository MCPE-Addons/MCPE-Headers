#pragma once

template<typename T>
struct NewType {
	T value;

	NewType() : value(0) {}
	NewType(const T &value) : value(value) {}
	NewType(const NewType<T> &other) : value(other.value) {}

	NewType<T> &operator=(const NewType<T> &other) {
		value = other.value;
		return *this;
	}

	operator const T() const { return value; }
	bool operator==(const NewType<T> &other) const { return value == other.value;}
	bool operator!=(const NewType<T> &other) const { return value != other.value; }
	bool operator<(const NewType<T> &other) const { return value < other.value; }
};