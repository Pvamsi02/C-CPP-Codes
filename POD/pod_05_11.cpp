#include <iostream>
#include <vector>
#include <string>
using namespace std;

// check if a given string is a numeric string or not
bool isNumber(const string &str)
{
    return !str.empty() && (str.find_first_not_of("[0123456789]") == std::string::npos);
}
vector<string> split(const string &str, char delim)
{
    auto i = 0;
    vector<string> v;

    auto pos = str.find(delim);

    while (pos != string::npos)
    {
        v.push_back(str.substr(i, pos - i));
        i = ++pos;
        pos = str.find(delim, pos);
    }

    v.push_back(str.substr(i, str.length()));

    return v;
}

// Function to validate an IP address
bool validateIP(string ip)
{
    // split the string into tokens
    vector<string> list = split(ip, '.');
    if (list.size() != 4)
    {
        return false;
    }

    // validate each token
    for (string str : list)
    {
        // verify that the string is a number or not, and the numbers
        // are in the valid range
        if (!isNumber(str) || stoi(str) > 255 || stoi(str) < 0)
        {
            return false;
        }
    }

    return true;
}

// Validate an IP address in C++
int main()
{
    string ip = "14.8.9.28";
    // string ip = "100.xyz.1.15";
    // string ip = "115.300.10.60";
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        if (validateIP(s[i]))
        {
            cout << "Valid IP Address" << endl;
        }
        else
        {
            cout << "Invalid IP Address" << endl;
        }
    }

    return 0;
}