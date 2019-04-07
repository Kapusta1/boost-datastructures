#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>
#include <boost/tuple/tuple_comparison.hpp>
#include <boost/ref.hpp>
#include <string>
#include <iostream>

using std::cout;
/*
int main()
{
	typedef boost::tuple<std::string, int> animal;
	animal a{ "cat", 4 };
	std::cout << a << '\n';
	return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	typedef boost::tuple<std::string, int, bool> animal;
	animal a{ "cat", 4, true };
	cout << std::boolalpha << a << '\n';
	return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	cout.setf(std::ios::boolalpha);
	cout << boost::make_tuple("cat", 4, true)<<'\n';
	return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	std::string s = "cat";
	cout.setf(std::ios::boolalpha);
	cout << boost::make_tuple(boost::ref(s), 4, true) << '\n';
	return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	typedef boost::tuple<std::string, int, bool> animal;
	animal a = boost::make_tuple("cat", 4, true);
	cout << a.get<0>() << '\n';
	cout << boost::get<0>(a) << '\n';
	cout << a.get<1>() << '\n';
	cout << std::boolalpha << boost::get<2>(a) << '\n';
	return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	typedef boost::tuple<std::string, int, bool> animal;
	animal a1 = boost::make_tuple("cat", 4, true);
	a1.get<0>() = "dog";
	cout << std::boolalpha << a1 << '\n';
	return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	typedef boost::tuple<std::string, int, bool> animal;
	animal a1 = boost::make_tuple("cat", 4, true);
	animal a2 = boost::make_tuple("shark", 0, true);
	cout << std::boolalpha << (a1 >a2) << '\n';
	return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	typedef boost::tuple<std::string &, int &, bool&> animal;
	std::string name = "cat";
	int legs = 4;
	bool tail = true;
	animal a = boost::tie(name, legs, tail);
	name = "dog";
	cout << std::boolalpha << a << '\n';
	return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	typedef boost::tuple<std::string &, int &, bool&> animal;
	std::string name = "cat";
	int legs = 4;
	bool tail = true;
	animal a = boost::make_tuple(boost::ref(name), boost::ref(legs), boost::ref(tail));
	name = "dog";
	cout << std::boolalpha << a << '\n';
	return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
boost::tuple<std::string, int> new_cat()
{
	return boost::make_tuple("cat", 4);
}
int main()
{
	std::string name;
	int legs;
	boost::tie(name, legs) = new_cat();
	cout << name << ", " << legs << '\n';
	return 0;
}