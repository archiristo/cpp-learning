#include <iostream>
#include <string>

using namespace std;
main(){
	int num1, num2, toplama, cikarma, carpma, bolme;
	cout<<"Enter a number: "<<endl;
	cin>>num1;
	cout<<"Enter a number: "<<endl;
	cin>>num2;
	toplama=num1+num2;
	cikarma=num1-num2;
	carpma=num1*num2;
	bolme=num1/num2;
	cout<<"First number+Second number= "<<toplama<<endl;
	cout<<"First number-Second number= "<<cikarma<<endl;
	cout<<"First number*Second number= "<<carpma<<endl;
	cout<<"First number/Second number= "<<bolme<<endl;
}
