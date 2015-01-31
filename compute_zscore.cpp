#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void compute_zscore(const vector<int> &sample) {
  
    double mean = 0;
    double std=0;
    //mean
    for(auto i:sample) {
    mean += i;
    }
    mean = mean/sample.size();
    
    //stddev
    for(auto i:sample) {
     std += pow((i-mean),2);
    }
    std = std/sample.size();
    std = int(sqrt(std));
  
    //z score 
    for(auto i:sample) {
        float z = (i-mean)/std;
        cout<<floor(z)<<" ";
    }
    
}