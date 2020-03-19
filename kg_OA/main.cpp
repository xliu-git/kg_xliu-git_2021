#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char* argv[])
{
    if (argc!=3) {
        cout<<"false"<<endl;
        return 0;
    }
    string s1=argv[1], s2=argv[2];
    if (s1.size()!=s2.size()) {
        cout<<"false"<<endl;
        return 0;
    }


    unordered_map<char, char> mymap;
    for(int i=0;i<s1.size();i++){
        if (mymap.find(s1[i])==mymap.end()) {
            mymap.insert(make_pair(s1[i],s2[i]));
        }
        else if (mymap[s1[i]]!=s2[i]) {
        cout<<"false"<<endl;
        return 0;
        }
    }
    cout<<"true"<<endl;
    return 0;
}
