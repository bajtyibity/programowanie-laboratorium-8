#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a,n1,n2,n3;
	
	int *wn1;  
 	wn1 = &n1;
 	
	int *wn2;  
 	wn2 = &n2;
 	
 	int *wn3;  
 	wn3 = &n3;
 	
	//1
	cout<<"adres zadeklarowanej zmiennej "<<&a<<endl<<endl;
	
	//2
	cout<<"podaj wartosc typu cyfra"<<endl;
	cin>>a;
	cout<<"wartosc zadeklarowanej zmiennej "<<a<<endl;
	cout<<"adres zadeklarowanej zmiennej "<<&a<<endl<<endl;
	
	//3
	cout<<"podaj cyfre 1 "<<endl;
	cin>>n1;
		
	cout<<"podaj cyfre 2 "<<endl;
	cin>>n2;
	
	cout<<"wartosc odejmowania: "<<*wn1-*wn2<<endl<<endl;
	//4
	cout<<"podaj cyfre 1 "<<endl;
	cin>>n1;
		
	cout<<"podaj cyfre 2 "<<endl;
	cin>>n2;
	
	cout<<"podaj cyfre 3 "<<endl;
	cin>>n3;
	
	cout<<"wartosc srednia: "<<(*wn1+*wn2+*wn3)/3<<endl;
	
	
	return 0;
}
