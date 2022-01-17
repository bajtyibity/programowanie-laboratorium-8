#include <iostream>

using namespace std;

int potega2(int &a)
{
	return a*a;
};

int main(int argc, char** argv)
{
	int a;
	
	cout<<"podaj liczbe ktora zostanie podniesiona do kwadratu: ";
	cin>>a;
	
	cout<<endl;
	
	cout<<"liczba podniesiona do kwadratu wynosi: "<<potega2(a);
	
	return 0;
}
