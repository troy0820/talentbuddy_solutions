#include <iostream>
#include <vector>

using namespace std;

void compute_mean(const vector<int> &sample) {

    vector<int>j(sample);
    int sum=0;
    for(int i=0; i < j.size(); i++) {
    sum += j[i];
    }
     sum /= j.size();
    cout<<sum;
}