#include <iostream>
#include <algorithm>

using namespace std;

void zmiana(int *ra,int* rb)
{
	int temp;
	
	temp = *ra;
	*ra = *rb;
	*rb = temp;
}


int main(int argc, char** argv) 
{
	int a,b,c;
	int* ra=&a;
	int* rb=&b;
	 
	cout<<"podaj 1 wartosc: ";
	cin>>a;
	
	cout<<"podaj 2 wartosc: ";
	cin>>b;
	cout<<endl;
	
	zmiana(ra,rb);
	
	cout<<"po zmianie wartosc 1: "<<*ra<<endl;
	cout<<"po zmianie wartosc 2: "<<*rb<<endl;
	
	return 0;
}
