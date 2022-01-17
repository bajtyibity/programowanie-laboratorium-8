#include <iostream>

using namespace std;

int mniejsza(int *ra,int* rb)
{
	return (*ra<*rb)? *ra:*rb;
}

int * mniejsza2(int *ra,int* rb)
{
	return (*ra<*rb)? ra:rb;
}

int main(int argc, char** argv) 
{
	int a,b,c;
	int* ra=&a;
	int* rb=&b;
	int* rc;
	 
	cout<<"podaj 1 wartosc: ";
	cin>>a;
	cout<<endl;
	
	cout<<"podaj 2 wartosc: ";
	cin>>b;
	cout<<endl;
	
	c=mniejsza(ra,rb);
	cout<<"najmniejsza liczba to "<<c<<endl;
	cout<<endl;
	
	cout<<"2 podpunkt zadania funkcja zwracajaca wskaznik"<<endl;
	rc=mniejsza2(ra,rb);
	cout<<"najmniejsza liczba to "<<*rc<<endl;
	
	return 0;
}
