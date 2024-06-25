#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){

    char str[100];
    int alp, digit, spchar, i;
    alp = digit = spchar = i = 0;

    cout<<"Enter The String: ";
    cin>>str;

    while(str[i]!='\0')
        {
        if((str[i]>='a'&& str[i]<='z')|| (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }

        else if (str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }

        else
        {
            spchar++;

        }
        i++;
    }

        cout<<"count of alphabet="<<alp<<endl;
		cout<<"count of digit="<<digit<<endl;
		cout<<"count of special characters="<<spchar;
	}
