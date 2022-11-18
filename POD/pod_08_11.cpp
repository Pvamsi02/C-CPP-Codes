#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n1, n2, t, o1 = 0, o2 = 0;
    cin >> n1 >> n2;
    vector<int> v1;
    vector<int> v2;
    while (n1 != 0)
    {
        t = n1 % 10;
        v1.push_back(t);
        n1 = n1 / 10;
    }
    while (n2 != 0)
    {
        t = n2 % 10;
        v2.push_back(t);
        n2 = n2 / 10;
    }
    for (int i = 0; i < v1.size(); i++)
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] == v2[j])
            {
                v1.erase(v1.begin() + i);
                v2.erase(v2.begin() + j);
                i = 0;
                j = 0;
                if (v1.size() == 0)
                {
                    v1.push_back(1);
                }

                if (v2.size() == 0)
                {
                    v2.push_back(1);
                }
            }

            // else if (v1.size() == 1 && v2.size() == 1)
            // {
            //     if (v1[i] == v2[j] == 1)
            //         break;
            // }
        }
    t = 1;
    string s1(v1.begin(),v1.end());
    string s2(v2.begin(),v2.end());

    for (auto i : v1)
    {
        o1 = t * i + o1;
        t = t * 10;
    }
    t = 1;
    for (auto j : v2)
    {
        o2 = t * j + o2;
        t = t * 10;
    }

    if (o2 == 0)
        printf("-1.00");
    // else if (o1 == 0 && o2 == 0)
    //     cout << "1.00";
    else
    {
        float f = (float)o1 / o2;
        printf("%.2f", f);
    }
}