// #include <iostream>
// #include <vector>
// using namespace std;
// class pipes
// {
// public:
//     int diameter;
//     int length;
// };
// int main()
// {
//     int f, h, d, n, i, j, k = 0, swap, sum = 0;
//     cin >> f;
//     cin >> h;
//     cin >> d;
//     cin >> n;
//     pipes p[n];
//     vector<int> res[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> p[i].diameter;
//         cin >> p[i].length;
//         if (d == p[i].diameter)
//         {
//             res[k].push_back(p[i].length);
//             sum += p[i].length;
//             k++;
//         }
//     }
//     for (i = 0; i < k - 1; i++)
//         for (j = 0; j < k - 1 - i; j++)
//             if (res[j + 1] < res[j])
//             {
//                 swap = res[j];
//                 res[j] = res[j + 1];
//                 res[j + 1] = swap;
//             }
//     for (i = 0; i < k; i++)
//         res[i].pop_back();
//     for (i = 0; i < k; i++)
//         cout << res[i];
//     cout << sum;
// }
# include <bits/stdc++.h>
    using namespace std;



    void solve(){
        int f, h, d;
        cin >> f >> h >> d;
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> pq; 
        for(int i = 0; i < n; i++){
            int dia, ht;
            cin >> dia >> ht;
            if(dia == d) pq.push(ht);
        }

        int cost = 0;
        while(pq.size() > 1){
            int up1 = pq.top();
            pq.pop();
            int up2 = pq.top();
            pq.pop();
            cost += up1 + up2;
            pq.push(up1 + up2);
        }

        cout << cost;
    }

    int main(){
        solve();
    }
