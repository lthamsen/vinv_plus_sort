#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std; 

static bool comp(const vector<int>& vec1, const vector<int>& vec2) {
    return vec1[0] < vec2[0];
    }

int main() {
    srand(time(NULL)); //Actual randomness

    //Creating 2D vector
    vector<vector<int>> par;

    //Filling vector of integers with randnr and filling 2D vector
    for (size_t i = 0; i < 20; i++) {
        vector<int> sub;
        for (size_t I = 0; I < 20; I++) {
            sub.push_back(rand() % 100 + 10);    
        }
        par.push_back(sub);
    }

    //Printing contents
    for (size_t i = 0; i < 20; i++) {
        for (size_t I = 0; I < 20; I++) {
            cout << par[i][I] << ' ';
        }
        cout << endl;   
    }

    //sorting using custom sort case
    sort(par.begin(), par.end(), comp);

    //Printing sorted data
    cout << endl << endl;

    for (size_t i = 0; i < 20; i++) {
        for (size_t I = 0; I < 20; I++) {
            cout << par[i][I] << ' ';
        }
        cout << endl;   
    }
}