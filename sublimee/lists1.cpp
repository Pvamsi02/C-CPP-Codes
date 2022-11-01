#include <bits/stdc++.h>
using namespace std;
void printls(list<int> &ls)
{
    cout << "size:" << ls.size() << endl;
    for (auto i = ls.begin(); i != ls.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int main()
{
    list<int> ls1 = {1, 2, 6, 4, 3, 7, 9, 8, 11, 22, 12};
    list<int> ls2;
    for (int i = 10; i < 20; i++)
    {
        ls2.push_back(i);
        /* code */
    }
    printls(ls1);
    ls1.sort();
    cout << "After sorting" << endl;
    printls(ls1);
    cout << "Max element:";
    cout << *max_element(ls1.begin(), ls1.end()) << endl;
    ls1.reverse();
    cout << "After reverse operation:" << endl;
    printls(ls1);
    cout << ls1.max_size();
    int arr[] = {1, 2, 6, 4, 3, 7, 9, 8, 11, 22, 12};
    for (int n : arr)
        cout << n << " ";
    cout << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << *max_element(arr, arr + n) << endl;
    cout << "array after sorting:";
    sort(arr, arr + n);
    for (int n : arr)
        cout << n << " ";
    cout << endl;
    cout << "After merging ls1,ls2:" << endl;
    ls1.merge(ls2);
    printls(ls1);
    ls1.sort();
    cout << "After sorting" << endl;
    printls(ls1);
    list<int>::iterator it = ls1.begin();
    advance(it, 5);
    cout << *it;
    return 0;
}