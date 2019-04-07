#include <boost/optional.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using std::cout;
using boost::optional;
using namespace boost;
/*
int get_even_random_number()
{
	int i = std::rand();
	return (i % 2 == 0) ? i : -1;
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	int i = get_even_random_number();
	if (i != -1)
		cout << std::sqrt(static_cast<float>(i)) << '\n';
	return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
optional<int> get_even_random_number()
{
	int i = std::rand();
	return (i % 2 == 0) ? i : optional<int>{};
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	optional<int> i = get_even_random_number();
	if (i)
		cout << std::sqrt(static_cast<float>(*i)) << '\n';
	return 0;
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
optional<int> get_even_random_number()
{
	int i = std::rand();
	return optional<int>{i % 2 == 0, i};
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	optional<int> i = get_even_random_number();
	if (i.is_initialized())
		cout << std::sqrt(static_cast<float>(i.get())) << '\n';
	return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

optional<int> get_even_random_number()
{
	int i = std::rand();
	return make_optional(i % 2 == 0, i);
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	optional<int> i = get_even_random_number();
	double d = get_optional_value_or(i, 5);
	cout << std::sqrt(d) << '\n';
	return 0;
}