#include<iostream>

using namespace std;

int main()
{
	int n = 0, i = 40;
	int& r = n;
	r = 42;
	cout << "r=" << r << endl;
	r = i;
	cout << "r=" << r << endl;
	i = r;
	cout << "i=" << i << endl;
	return 0;
}