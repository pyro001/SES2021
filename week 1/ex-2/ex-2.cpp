// ex-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*Make a class Adder. It has a private integer variable sum for holding the sum.
Make an explicit constructor for initializing sum to zero.It has 3 public member-functions. The member-function add(int n)
increases the sum. The member-function: void reset_sum(void) sets sum to 0.
The member-function:int get_sum(void) returns the sum.Declare some adder objects and try them out in your main-function*/

class Adder
{
public:
	void add(int n);
	void reset_sum(void);
	int get_sum(void);
	Adder();
	~Adder();

private:
	int sum;

};

void Adder::add(int n)
{
	sum += n;
}

void Adder::reset_sum(void)
{
	sum = 0;
}

int Adder::get_sum(void)
{
	std::cout<< sum<<"\n\a";
	std::cout<< sum<<"\n\a";
	return sum;

}

Adder::Adder()
{
	sum = 0;
}

Adder::~Adder()
{
}
int main()
{
	Adder s;
	s.add(1);
	s.get_sum();
	s.reset_sum();
	s.get_sum();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
