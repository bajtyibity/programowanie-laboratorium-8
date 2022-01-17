#include <iostream>

using namespace std;

void wypisz(char &a,int &l)
{
	l--;
	
	if(l>=0)
	{
	wypisz(a,l);
	cout<<a;
	}
}

int main(int argc, char** argv) 
{
	int l;
	char znak;
	
	cout<<"podaj znak: ";
	cin>>znak;
	cout<<endl;
	
	cout<<"podaj ilosc powtorzen: ";
	cin>>l;
	cout<<endl;
	
	wypisz(znak,l);

	return 0;
}
