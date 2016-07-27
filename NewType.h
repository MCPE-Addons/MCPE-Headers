#pragma once

template<typename T>
struct NewType {
    typedef unsigned char Raw;
    NewType<T>::Raw value;

	NewType() {
		value = 0;
	}

    NewType(const NewType<T>::Raw &value) {
		this->value = value;
	}

	NewType(const NewType<T> &other) {
		value = other.value;
	}
   
    operator const T &() {
		return value;
	}
	
	NewType<T> &operator=(const NewType<T> &other) {
		value = other.value;
		return *this;
	}

    bool operator==(const NewType<T> &other) const {
		return value == other;
	}

    bool operator<(const NewType<T> &other) const {
		return value < other;
	}
};