#pragma once
#include <utility>
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <iostream>



template <typename T>
class ExtArray
{
private:
	std::vector<T> extended_array;
	size_t _size;
public:
	ExtArray(std::initializer_list<T> l) : extended_array(l)
	{
		_size = l.size();
	}

	ExtArray(int size) : _size(size)
	{
		extended_array.resize(_size);
	}

	T& operator[](size_t index)
	{
		return extended_array[index];
	}

	size_t size()
	{
		return _size;
	}

	double mean()
	{		
		if (extended_array.empty()) return 0;		//Задание 1: проверка на пустой массив

		double sum = 0;
		for (size_t i = 0; i < _size; i++)
		{
			sum += extended_array[i];
		}
		return sum / _size;
	}

	// Задание 2: перегрузка метода mean
	double mean(size_t beginIndex, size_t endIndex)
	{
		if (extended_array.empty()) return 0;

		double sum = 0;
		size_t size_ = 0;
		if (extended_array[beginIndex] > extended_array[endIndex] || extended_array[beginIndex] == extended_array[endIndex])
		{
			throw std::invalid_argument("Invalid index!");
		}	

		for (size_t i =  beginIndex; i <= endIndex; i++)
		{
			++size_;
			sum += extended_array[i];
		}
		return sum / size_;
	}

	double median()
	{		
		if (extended_array.empty()) return 0;		//Задание 1: проверка на пустой массив

		std::vector<T> temp_array;
		std::copy(extended_array.begin(), extended_array.end(), back_inserter(temp_array));
		std::sort(temp_array.begin(), temp_array.end());
		if (_size % 2 == 1)
		{
			return temp_array[_size / 2];
		}
		else
		{
			return static_cast<double>(temp_array[(_size / 2) - 1] + temp_array[_size / 2]) / 2;
		}
	}

	std::pair<T, int> mode()
	{		
		if (extended_array.empty())  return std::pair<T, int>(0, 0);		//Задание 1: проверка на пустой массив

		else {
			T max = extended_array[0], cmax = 0, rmax = 0;
			for (int i = 0; i < _size; i++)
			{
				if (cmax > rmax)
				{
					rmax = cmax;
					max = extended_array[i - 1];
				}
				cmax = 0;
				for (int j = i; j < _size; j++)
				{
					if (extended_array[j] == extended_array[i])
					{
						cmax++;
					}
				}
			}
			return std::pair<T, int>(max, rmax);
		}
		
	}
	
	// Задание 3: метод checkSum - возвращает контрольную сумму для битового массива
	size_t checkSum()
	{
		size_t sum{};	
		// Проверка типа данных в массиве 
		for (size_t i = 0; i < _size; i++)
		{
			if( extended_array[i] != (int)extended_array[i])
		    {
		       throw std::bad_typeid();
		    }
		    else continue;
		}
		// Проверка на значения, отличные от 0 и 1
		for (size_t i = 0; i < _size; i++)
		{
			if (extended_array[i] > 0 && extended_array[i] != 1)
			{
				throw std::logic_error("Number not equal 0 or 1!");
			}
			else continue;
		}
		// Подсчет суммы (кол-ва элементов, равных 1)
		for (size_t i = 0; i < _size; i++)
		{
			if (extended_array[i] == 1)
			
				sum += extended_array[i];
		}
		return sum;
	}
		
};

