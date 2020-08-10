#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int no_of_cols;
    cin >> no_of_cols;
    vector<char> chars1;
    vector<char> chars2;
    vector<char> chars3;
    //Inputing all 3 rows with no_of_cols cols
    for (int j = 1; j <= 3; j++)
    {
        for (int i = 0; i < no_of_cols; i++)
        {
            char temp;
            cin >> temp;
            if (temp != ' ')
            {
                j == 1 ? chars1.push_back(temp) : j == 2 ? chars2.push_back(temp) : chars3.push_back(temp);
            }
        }
    }
    int i = 0;

    while (i < no_of_cols - 2)
    {
        if (chars1[i] == '#' && chars2[i] == '#' && chars3[i] == '#')
        {
            cout << '#';
            i += 1;
            continue;
        }

        else if (chars1[i] == '.' && chars2[i] == '.' && chars3[i] == '.')
        {
            i += 1;
            continue;
        }

        else if (chars1[i] == '.' && chars1[i + 2] == '.' && chars1[i + 1] == '*')
        {
            if (chars2[i] == '*' && chars2[i + 1] == '*' && chars2[i + 2] == '*')
            {
                if (chars3[i] == '*' && chars3[i + 2] == '*' && chars3[i + 1] == '.')
                {
                    cout << 'A';
                    i += 3;
                    continue;
                }
            }
        }

        else if (chars1[i] == '*' && chars1[i + 2] == '*' && chars1[i + 1] == '.')
        {
            if (chars2[i] == '*' && chars2[i + 2] == '*' && chars2[i + 1] == '.')
            {
                if (chars3[i] == '*' && chars3[i + 1] == '*' && chars3[i + 2] == '*')
                {
                    cout << 'U';
                    i += 3;
                    continue;
                }
            }
        }

        else if (chars1[i] == '*' && chars1[i + 1] == '*' && chars1[i + 2] == '*')
        {
            if (chars2[i] == '*' && chars2[i + 1] == '*' && chars2[i + 2] == '*')
            {
                if (chars3[i] == '*' && chars3[i + 1] == '*' && chars3[i + 2] == '*')
                {
                    cout << "E";
                    i += 3;
                    continue;
                }
            }
            else if (chars2[i] == '.' && chars2[i + 2] == '.' && chars2[i + 1] == '*')
            {
                if (chars3[i] == '*' && chars3[i + 1] == '*' && chars3[i + 2] == '*')
                {
                    cout << "I";
                    i += 3;
                    continue;
                }
            }
            else if (chars2[i] == '*' && chars2[i + 2] == '*' && chars2[i + 1] == '.')
            {
                if (chars3[i] == '*' && chars3[i + 1] == '*' && chars3[i + 2] == '*')
                {
                    cout << "O";
                    i += 3;
                    continue;
                }
            }
        }
        i += 1;
    }
    return 0;
}
