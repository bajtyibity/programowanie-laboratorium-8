#include <iostream>
#include <math.h>

using namespace std;

double pierwiastek2(double &a)
{
	a=sqrt(a);
};

int main(int argc, char** argv)
{
	double a;
	
	cout<<"podaj liczbe z ktorej zostanie obliczona potega kwadratowa: ";
	cin>>a;
	
	pierwiastek2(a);
	
	cout<<endl;
	
	cout<<"liczbe z ktorej zostanie obliczona potega kwadratowa wynosi: "<<a;
	
	return 0;
}

