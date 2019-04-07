#include <boost/variant.hpp>
#include <iostream>
#include <string>

using std::cout;
/*
int main()
{
	boost::variant<double, char, std::string> v;
	v = 3.13;
	v = 'A';
	v = "Boost";
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	boost::variant<double, char, std::string> v;
	v = 3.14;
	cout << v << '\n';
	//cout << boost::get<double>(v) << '\n';
	v = 'A';
	cout << v << '\n';
	//cout << boost::get<char>(v) << '\n';
	v = "Boost";
	cout << v;
	//cout << boost::get<std::string>(v);
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct output : public boost::static_visitor<>
{
	void operator()(double d)const { cout << d << '\n'; }
	void operator()(char c)const { cout << c << '\n'; }
	void operator()(std::string s)const { cout << s << '\n'; }
};

struct simple_output : public boost::static_visitor<>
{
	template<typename T>
	void operator()(T t)const { cout << t << '\n'; }
	
};

int main()
{
	boost::variant<double, char, std::string> v;

	v = 3.14;
	boost::apply_visitor(simple_output{}, v);
	v = 'A';
	boost::apply_visitor(simple_output{}, v);
	v = "Boost";
	boost::apply_visitor(simple_output{}, v);
	return 0;
}