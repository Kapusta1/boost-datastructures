#include <boost/property_tree/ptree.hpp>
#include <iostream>

using std::cout;
using std::endl;

using boost::property_tree::ptree;

int main()
{
	ptree pt;
	pt.put("C:.Windows.System", "20 files");

	ptree &c = pt.get_child("C:");
	ptree &windows = c.get_child("Windows");
	ptree &system = windows.get_child("System");
	cout << system.get_value<std::string>() << '\n';
	return 0;
}