#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void compute_stddev(const vector<int> &sample) {

    int mean = 0;
    int std=0;
    
    for(auto i:sample) {
    mean += i;
    }

    mean = mean/sample.size();
    
    for(auto i:sample) {
     std += pow((i-mean),2);
    }

    std = std/sample.size();

    cout << int(sqrt(std));
}