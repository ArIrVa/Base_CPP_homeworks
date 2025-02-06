#define CATCH_CONFIG_MAIN
#include"catch2/catch_all.hpp"
#include"extended_array.h"
	TEST_CASE("Mean value") {
		// проверка на нулевой массив
		SECTION("int empty array") {
			ExtArray<int> v1{};
			REQUIRE(v1.mean() == 0);
		}
		SECTION("int numbers") {
			ExtArray<int> v1{ 4, 2, 7, 3, 5, 0, 3, 1 };
			REQUIRE(v1.mean() == 3.125);
		}
		// проверка номеров диапазона
		SECTION("int incorrect index") {
			ExtArray<int> v1{ 4, 2, 12, 3, 0, 8, 3, 5 };
			REQUIRE_THROWS(v1.mean(2, 4));
		}
		// вычисление среднего арифметического значения для заданного диапазона
		SECTION("int region") {
			ExtArray<int> v1{ 4, 2, 0, 3, 6, 0, 3, 5 };
			REQUIRE(v1.mean(2, 4) == 3);
		}
	}

	TEST_CASE("median value") {
		// проверка на нулевой массив
		SECTION("empty array") {
			ExtArray<double> v2{};
			REQUIRE(v2.mean() == 0);
		}
		SECTION("real numbers") {
			ExtArray<double> v2{ 4.5, 0.7, 10.8, -3.5 };
			REQUIRE(v2.median() == 2.6);
		}
	}

	TEST_CASE("Mode value") {
		// проверка на нулевой массив
		SECTION("empty array") {
			ExtArray<int> v1{};
			REQUIRE(v1.mean() == 0);
		}
		SECTION("int numbers") {
			ExtArray<int> v1{ 4, 2, 7, 2, 5, -5, 0, 5, 5 };
			REQUIRE(v1.mode().first == 5 );
		}
	}

	// Задание 3: тестовый кейс для метода checkSum
	TEST_CASE("CheckSum") {
		// проверка правильности вычисления
		SECTION("sum") {
			ExtArray<bool> v3{ 0, 1, 1, 1, 0, 1, 1, 1 };
			REQUIRE(v3.checkSum() == 6);
		}
		// проверка типа массива
		SECTION("type number error") {
			ExtArray<double> v3{ 0.1, 1, 0.18, 1, 0.3, 0, 1, 1 };
		REQUIRE_THROWS(v3.checkSum());
		}
		// проверка содержимого массива
		SECTION("number error") {
			ExtArray<int> v3{ 3, 1, 0, 1, 1, 0, 1, 1 };
			REQUIRE_THROWS(v3.checkSum());
		}
	}