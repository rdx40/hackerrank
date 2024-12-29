#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int N = stoi(ltrim(rtrim(n_temp)));

    if (N == 1) {
        cout << "one" << endl;
    } else if (N == 2) {
        cout << "two" << endl;
    } else if (N == 3) {
        cout << "three" << endl;
    } else if (N == 4) {
        cout << "four" << endl;
    } else if (N == 5) {
        cout << "five" << endl;
    } else if (N == 6) {
        cout << "six" << endl;
    } else if (N == 7) {
        cout << "seven" << endl;
    } else if (N == 8) {
        cout << "eight" << endl;
    } else if (N == 9) {
        cout << "nine" << endl;
    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

