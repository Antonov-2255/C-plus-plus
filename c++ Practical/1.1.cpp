#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){

    char str[100];
    int alp, digit, spchar, uppercase, lowercase, i;
    alp = digit = spchar = uppercase = lowercase = i = 0;

    cout<<"Enter The String: ";
    cin>>str;

    while(str[i]!='\0')
    {
        if((str[i]>='a'&& str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;

        if (str[i]>='a' && str[i]<='z')
        {
            lowercase++;
        }

        else if (str[i]>='A' && str[i]<='Z')
        {
            uppercase++;
        }

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

    cout<<"Count of alphabets: "<<alp<<endl;
    cout<<"Count of uppercase letters: "<<uppercase<<endl;
    cout<<"Count of lowercase letters: "<<lowercase<<endl;
    cout<<"Count of digits: "<<digit<<endl;
    cout<<"Count of special characters: "<<spchar<<endl;
}

