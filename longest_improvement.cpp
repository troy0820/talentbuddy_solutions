#include <iostream>
#include <vector>

using namespace std;

void longest_improvement(const vector<int> &grades) {
     int count =1;
     int max = 0;
    for(int i=0; i < grades.size()-1; i++){
        if(grades[i] <= grades[i+1]){
        count++;
        } else {
            if(max < count) {
            max = count;
            }
        count = 1;
        }
    }
    cout << max;
}
