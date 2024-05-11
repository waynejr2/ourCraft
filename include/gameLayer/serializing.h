#pragma once
#include <vector>



void writeData(std::vector<unsigned char> &vector, void *data, size_t size);


template <class T>
void writeData(std::vector<unsigned char> &vector, T data)
{
	writeData(vector, &data, sizeof(data));
}

template <class T>
void readDataUnsafe(void *data, T &t)
{
	memcpy(&t, data, sizeof(T));
}