#include<iostream>
using namespace std;
int main()
{
	int a , month , day , i ;
	float age ;

	cout<<"enter your age :";
	cin>>age;

	a = age;
	i = (age-a)*100;

	month=(a*12)+i;
	day=month*30;

	cout<<"your age in month :"<<month<<endl;
	cout<<"your age in days :"<<day<<endl;

	return 0;


}


