#include<iostream>

using namespace std;
int main()
{
	int age_month, age_years, age_days;

	cout<<"Enter age in years:";
	cin>>age_years;

	age_days=age_years*365;
	age_month=age_years*12;

	cout<<"Age in months:"<<age_month<<endl;
	cout<<"Age in days:"<<age_days;
	return 0;

}

