#include "pch.h"

int functionA() {
	int  a = 1;
	
	if (a = 0) {
		std::cout << "a is 0" << std::endl;
	}
	else {
		std::cout << "a is not 0" << std::endl;
	}
	
	return a; // a is 1
}

int functionB() {
	int  a = 1;

	if (a < 0); 
	{ //a is not less than 0, so skip this block
		std::cout << "a is smaller than 0" << std::endl;
		a = 42;
	}
	
	return a; //a should be 1
}

int functionC() {
	std::string names[] = { "Alice" "Bob" "Charlie" "David" };

	return names[0].length(); // returns length of "Alice", 5 characters
}

int functionD() {
	int counter = 0;
	
	for(int i = 0; i<10, i++ ;)
	{
		std::cout << i << std::endl;
		counter++;
	}
	
	return counter; //counter should be 10
}

int functionE() {
	int i = 0;
	int j = 0;
	
	if (i > 5) //change i if it is  
		std::cout << "i is not 5, changing it to 5" << std::endl;
		j = 5;

	return i; //i should be 5
}

int functionF() {
	int i = 5;

	//add one to i
	i =+ 1;

	return i; //i should be 6
}

int functionG() {
	int i = 0;

	i = i + 2;
	if(i != 0)
		i == 10;

	return i; //i should be 10
}

int functionH() {
	int i = 0;
	int j = 1;

	return i, //i should be 0

	j = 15;   // never reached as function returns on previous line
}

int functionI() {

	int a = 10;

	int b = a +++3;  //WTF??

	return b + a; // returns 23 ?
}

int functionJ() {
	float f;

	f = 100,000;

	return f; // f is 100000
}

int functionK() {
	char c = 'k';

	int i=0;

	switch (c) {
		case 'k':
			i = 1;
		case 'p':
			i = 2;
	}

	return i; //i is 1
}

int functionL() {
	int x = 5;
	int y = 0;
	int z = 10;

	y = x // is assigned the value of x

	&z; //get address of z, whhich we will use to ... 

	return y; //y should be 5
}

TEST(TestFunctionA, Returns1) {
  EXPECT_EQ(1, functionA());
}

TEST(TestFunctionB, Returns2) {
	EXPECT_EQ(1, functionB());
}

TEST(TestFunctionC, Returns5) {
	EXPECT_EQ(5, functionC());
}

TEST(TestFunctionD, Returns5) {
	EXPECT_EQ(10, functionD());
}

TEST(TestFunctionL, Returns5) {
	EXPECT_EQ(5, functionL());
}
