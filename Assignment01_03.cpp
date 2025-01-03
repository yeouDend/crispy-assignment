#include<iostream>

using namespace std;

template <typename T>
class SimpleVector
{
private:
	T* data;
	int currentSize;
	int currentCapacity;

public;
	SimpleVector() : data(new T[10], currentCapacity(10), currentSize(0))
	{
		data = new T[capacity];
	}
	SimpleVector() 
	{
		delete[] data;
	}

};