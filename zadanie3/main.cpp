#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a;
	double s;
	cout<<"na ile elementow utworzyc tablice: ";
	cin>>a;
	
	int tab[a];
 	
	for(int i=0;i<a;i++)
	{
	cout<<"podaj wartosc do tablicy nr "<<i+1<<" :";
	cin>>tab[i];
	s+=tab[i];
	}
	
	s/=a;
	cout<<endl;
	
	for(int i=0;i<a;i++)
	{
		if(tab[i]>s)
		cout<<"element wiekszy od sredniej: "<<tab[i]<<endl;
	}
	
	return 0;
}

