#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        string result;
        int n = str1.size();
        int i = 0;
        int j = 0;
        while (i < n)
        {
            if (str1[i] == str2[j])
            {
                result += str2[j];
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(result == str2){
            cout << "Possible" << endl;
        }else{
            cout << "Impossible" << endl;
        }
    }
    return 0;
}