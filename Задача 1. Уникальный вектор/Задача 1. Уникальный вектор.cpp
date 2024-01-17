// Задача 1. Уникальный вектор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

template<class T>
void cleaning_elements(std::vector<T> &arr) {
	std::sort(arr.begin(), arr.end());
	auto last = std::unique(arr.begin(), arr.end());
	arr.erase(last, arr.end());
}

template<class T>
void print(std::vector<T>& arr) {
	for (const auto n : arr) {
		std::cout << n << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> arr{1, 1, 2, 5, 6, 1, 2, 4};
	std::cout << "[IN]: ";
	print(arr);

	cleaning_elements(arr);
	std::cout << "[OUT]: ";
	print(arr);
}


