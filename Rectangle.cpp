#include <iostream>

using namespace std;
main(){
	int uzunkenar, kisakenar, cevre, alan;
	cout<<"Uzun kenar: "<<endl;
	cin>>uzunkenar;
	cout<<"Kisa kenar: "<<endl;
	cin>>kisakenar;
	cevre = 2*uzunkenar+2*kisakenar;
	alan = uzunkenar*kisakenar;
	cout<<"Dikdortgen alani: "<<alan<<endl;
	cout<<"Dikdortgen cevresi: "<<cevre<<endl;
}
