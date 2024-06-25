    #include <iostream>
    using namespace std;

    int Strlen(const char str[]) {

        int i, length = 0;

        for (i = 0; str[i] != '\0'; i++)
            {
            if (str[i] != ' ') {
                length++;
            }
        }
        return length;
    }

    int main() {
        char String[100];

        cout << "Enter a string: ";
        cin.getline(String, 100);

        int length = Strlen(String);

        cout << "Length of the string: " << length << endl;

        return 0;
    }
