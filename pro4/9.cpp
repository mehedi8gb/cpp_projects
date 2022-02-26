#include <iostream>
using namespace std;

int main()
{
    char line[100];
    int vowels, consonants, digits, spaces;

    vowels = consonants = digits = spaces = 0;

    cout << "Enter line: ";
    cin.getline(line, 100);
    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U')
        {
            ++vowels;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            ++consonants;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

}