// this class will contain the main function to run the code;
#include <bits/stdc++.h>
using namespace std;
#include "LRU.hpp"

int main(){

    LRUCache <int> cache(5);
    cache.put(8,100);
    cache.put(10,16);

    cout<<cache.get(8)<<endl;

    return 0;
}