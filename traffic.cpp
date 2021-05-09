//#include "Pair.h"
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct file {
    long long sz;
    long long idx;
    vector<string>name;
};
struct intersec
{
    long long from, to;
    string name;
    long long length;
};
/*struct visited
{
    string n;
    int g;
};*/
int main() {
#ifndef ONLINE_JUDGE
   FILE* stream;
   freopen_s(&stream, "file.txt", "r", stdin);
   freopen_s(&stream, "file1.txt", "w", stdout);
#endif








/*#ifndef ONLINE_JUDGE
   FILE* stream;
   freopen_s(&stream, "output.txt", "r", stdin);
#endif*/
   // freopen("file.txt", "r", stdin); 
   // freopen("file1.txt", "w", stdout);
   map<string, int>mp;
   long long simulate_seconds,intersect,streets,cars,points;
   cin>>simulate_seconds>>intersect>>streets>>cars>>points;
   vector<intersec>v(intersect);
   for (long long i = 0;i < intersect;i++)
   {
       cin >> v[i].from;
       cin >> v[i].to;//
       cin >> v[i].name;
       cin >> v[i].length;
   }
   vector<pair<long long, string> >car_path(cars);
   map<string, int >visited;
 //  vector < pair<string, int> >isvisted;
   //vector<string>isvisited
   for (long long i = 0;i < cars;i++)
   {
       long long paths;
       cin >> paths;
       for (int j = 0;j < paths;j++)
       {
           string path_len;
           cin >> path_len;
           mp[path_len]++;
          // visited[path_len] = 1;
       }
      // getline(cin, path_len);

       //car_path.push_back({ paths,path_len });
      // vector<string>path(paths)

   }
   long long total = 0,ans=0;
   vector<pair<string, long long> >street_car;
   for (long long i = 0;i < intersect;i++)
   {
       for (auto &st:v)
       {
           if (!mp[st.name])
               continue;
           street_car.push_back({ st.name,mp[st.name] });
           total += mp[st.name];
       }
       if (total == 0 || street_car.size() == 0)
           continue;
       ans++;
   }
   cout << ans << endl;
   for (long long i = 0;i < intersect;i++)
   {
       for (auto& st : v)
       {
           if (!mp[st.name])
               continue;
           street_car.push_back({ st.name,mp[st.name] });
           total += mp[st.name];
       }
       if (total == 0 || street_car.size() == 0)
           continue;


       ans++;

   }
  
  // int sz = 0;
  
   /*for (auto& i : visited)
   {
       if (i.second == 1)
           sz++;
   }*/
   //cout << sz;



   /* long long m,t2,t3,t4;
    cin >> m >> t2 >> t3 >> t4;
    vector<file>v(m);
   // vector<pair<long long, vector<long long> > >v;
    for (long long i = 0;i < m;i++)
    {
        long long integrediends;
        cin >> integrediends;
        vector<string>na(integrediends);
        for (long long j = 0;j < integrediends;j++)
        {
            string name;
            cin >> name;
            na[j]=name;
        }
        v[i].idx = i;
        v[i].sz = integrediends;
        v[i].name = na;
            na.clear();
    }
    cout << 2 << endl;
   cout << 2 << " " << 1 << " " << 4 << endl;
    cout << 3 << " " << 0 << " " << 2 << " " << 3 << endl;
   // vector<vector<long, long> >v(m);*/
    /*Pair p(15, 16);
    Pair q(p);
    Pair* hp = new Pair(23, 42);
    delete hp;

    std::cout << "If this message is printed,"
        << " at least the program hasn't crashed yet!\n"
        << "But you may want to print other diagnostic messages too." << std::endl;*/
    return 0;
}
