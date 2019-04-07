#include <boost/any.hpp>
#include <string>
#include <iostream>
#include <typeinfo>

using std::cout;

/*
int main()
{
	boost::any a = 1;
	a = 3.14;
	a = true;
	boost::any s = std::string{ "Boost" };
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	boost::any a = 1;
	cout << boost::any_cast<int>(a) << '\n';
	a = 3.14;
	cout << boost::any_cast<double>(a) << '\n';
	a = true;
	cout << std::boolalpha << boost::any_cast<bool>(a) << '\n';
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	try
	{
		boost::any a = 1;
		cout << boost::any_cast<float>(a) << '\n';
	}
	catch (boost::bad_any_cast & e)
	{
		std::cerr << e.what() << '\n';
	}
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	std::string s = "cat";
	boost::any a =s ;
	if (!a.empty())
	{
		const std::type_info &ti = a.type();
		cout << ti.name() << '\n';
	}
	boost::any t = 1;
	int*i = boost::any_cast<int>(&t);
	cout << *i << '\n';
}
