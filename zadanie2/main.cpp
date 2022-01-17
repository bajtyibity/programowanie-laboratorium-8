#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) 
{
	srand (time(NULL));

		int a,b;
		int tab[10];
		
		cout<<"adres 1 elementu tablicy: "<<&tab[0]<<endl;
		
		cout<<"adres 4 elementu tablicy: "<<&tab[3]<<endl<<endl;
		
		cout<<"podaj najmniejsza liczbe ktora bedzie w losowej tablicy: ";
		cin>>a;
		
		cout<<"podaj najwieksza liczbe ktora bedzie w losowej tablicy: ";
		cin>>b;
		cout<<endl;
		
		for(int i=0;i<10;i++)
		tab[i] = rand() % (b-a+1) + a; 
		
		for(int i=0;i<10;i++)
		cout<<"wartosc tablicy nr "<<i+1<<" wynosi: "<<tab[i]<<endl;
		cout<<endl;
		
		for(int i=0;i<10;i++)
		cout<<"adres elementu nr: "<<i+1<<" wynosi: "<<&tab[i]<<endl;
	
	return 0;
}
